//
//  main.c
//  Commbat
//
//  Created by jim Veneskey on 1/29/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

/* Comm-Bat a two player tank game  by Jim Veneskey 12-18-89 (c)  */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <curses.h>


#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4

/* All externally accessed variables are defined here */

char bigmap[86][86],twas[9];
int tankx[9],tanky[9],tankm[9];
int decoyx[4],decoyy[4],decoym[4];
int shields[10],tank=1,decoy=1,map=1;
int basex,basey,basem;
int realx,realy;
int zx=0;     /* testing only */


// Function Prototypes
void boxit(int y1, int x1, int y2, int x2);
void clrtext(void);
void drawscr(void);
void printat(int row, int column, char* text);
void movetank(int direction);
int badmove(int direction);
void update(int tank);
void erasetank(int tank);


int main(void) {
    
    /* init ncurses */
    WINDOW * mainwin;
    
    if (( mainwin = initscr()) == NULL) {
        fprintf(stderr,"ERROR initializing ncurses.\n");
        exit(1);
    }
    
    
    /* Define all internally used variables               */
    
    int loopy,loopx;
    int keyin=0;
    
    
    /* Initialize BigMap array to all blanks     */
    
    for(loopy=1; loopy<=84; loopy++) {
        for(loopx=1; loopx<=84; loopx++) {
            bigmap[loopy][loopx]=' ';
        }
    }
    
    for(loopy=1; loopy<=2; loopy++) {
        for(loopx=1; loopx<=84; loopx++) {
            bigmap[loopy][loopx]='#';
            bigmap[loopy+82][loopx]='#';
        }
    }
    
    for(loopx=1; loopx<=2; loopx++) {
        for(loopy=1; loopy<=84; loopy++) {
            bigmap[loopy][loopx]='#';
            bigmap[loopy][loopx+82]='#';
        }
    }
    
    for(loopx=1; loopx<=8; loopx++) {
        shields[loopx]=100;
        twas[loopx]='B';
    }
    
    /*********** Main programming starts here ***********/
    
    
    curs_set(0);
    drawscr();
    initgame();
    views();
    while(keyin != 27)
    {
        keyin = check_keybrd();
        switch(keyin)
        {
            case 172:movetank(UP);break;
            case 180:movetank(DOWN);break;
            case 175:movetank(LEFT);break;
            case 177:movetank(RIGHT);break;
            case 182:clrtext();break;
            case 49:tank=1;views();break;
            case 50:tank=2;views();break;
            case 51:tank=3;views();break;
            case 52:tank=4;views();break;
            case 53:tank=5;views();break;
            case 54:tank=6;views();break;
            case 55:tank=7;views();break;
            case 56:tank=8;views();break;
            case 33:decoy=1;views();break;
            case 64:decoy=2;views();break;
            case 35:decoy=3;views();break;
        }
        remote();
        refresh();
    }
    
    curs_set(1);     /* Show Cursor */
    return(0);
    
}
/* What follows are function declarations */


/* BOXIT()   uses upper left and lower right corners as parameters */

void boxit(int y1, int x1, int y2, int x2) {
    int temp1;
    for(temp1=x1; temp1<=x2; temp1++) {
        move(temp1,y1);
        wprintw(stdscr,"#");
        move(temp1,y2);
        wprintw(stdscr,"#");
           
    }
    
    for(temp1=y1; temp1<=y2; temp1++) {
        move(x1,temp1);
        wprintw(stdscr,"#");
        move(x2,temp1);
        wprintw(stdscr,"#");
    }
    
    move(x1,y1);
    wprintw(stdscr,"#");
    move(x1,y2);
    wprintw(stdscr,"#");
    move(x2,y1);
    wprintw(stdscr,"#");
    move(x2,y2);
    wprintw(stdscr,"#");
}

/* a print @ type of routine            */

void printat(int row, int column, char* text) {
    move(column,row);
    wprintw(stdscr, text);
}

/* This routine simply clears out the old messages */
void clrtext(void) {
    move(3,24);
    wprintw(stdscr,"                                            ");
}

/*  This routine calls other routines to set up the main game screen */

void drawscr(void) {
    boxit(1,39,22,80);
    boxit(16,4,22,10);
    boxit(16,16,22,22);
    boxit(16,28,22,34);
    boxit(1,1,15,38);
    boxit(23,2,25,79);
    printat(1,53,"[ Main Map ]");
    printat(22,54,"[ Map # 1 ]");
    printat(1,6,"[ Comm-Bat Command Listing ]");
    printat(23,34,"[ Messages ]");
    printat(16,5,"[ D ]");
    printat(16,17,"[ B ]");
    printat(16,29,"[ T ]");
}

/* this routine polls the keyboard to see if a key has been struck.
 if not, it returns a zero.
 if so, it returns a value either 1-127 for normal keys or 201-209 for
 keypad.  non valid keys are not supported and ignored.  */

int check_keybrd(void) {
    if (! kbhit() ) return (0);  /* if no keystruck return with "0" */
    c = getch();                 /* Otherwise check for normal key  */
    if (c) return (c);           /* if it is normal, return it.     */
    c = getch();                 /* Must be an extended key - again */
    return (c+100);              /* add 100 to act as a flag.       */
    
}

/* this routine is responsible for moving the tank if it is ok to do so */
/* 'tank' is a global... */

void movetank(int direction) {
    int zq;
    
    if (!shields[tank]) {
        printat(24,3,"\x7");
        printat(24,3,"That Tank is dead - immobile!           ");
        return;
    }
    
    erasetank(tank);
    
    zq=badmove(direction);  /* 0 = Normal, 1 =  RIP, 2 = New Map   */
    
    if (zq == 1) {
        shields[tank]=0;
        printat(24,3,"Tank has hit map edge and exploded!");
        printat(24,3,"\x7");
        convert(tanky[tank],tankx[tank],tankm[tank]);
        if ((bigmap[realy][realx] !='B') && (bigmap[realy][realx] != 'D')) {
            bigmap[realy][realx] = 'X';
            if(tankm[tank] == map) {
                move(tankx[tank]+39,tanky[tank]+1);
                wprintw(stdscr,"X");
            }
        }
        views();
        return;
    }
    
    if(zq == 2) {
        convert(tanky[tank],tankx[tank],tankm[tank]);
        twas[tank]=bigmap[realy] [realx];
        if((twas[tank] !='B') && (twas[tank] !='D'))
            bigmap[realy] [realx] = 48+tank;
        views();
        return;
    }
    
    switch(direction) {
        case UP:
            tanky[tank] -= 1;
            break;
            
        case DOWN:
            tanky[tank] +=1;
            break;
            
        case LEFT:
            tankx[tank] -=1;
            break;
        case RIGHT:
            tankx[tank] +=1;
            break;
    }
    
    update(tank);
    views();
    return;
}

/* This function tests the legality of a move - if it will hit a wall. */
int badmove(int direction) {
    if (direction == LEFT  && tankx[tank] > 1) {
        return(0);
    } else if (direction == LEFT && (! (tankm[tank] % 2))) {
        tankx[tank] = 40;
        tankm[tank] = tankm[tank] - 1;
        return(2); /* Tank was on edge but EVEN map - adjust and ok */
    
    } else if (direction == LEFT) {
        return(1); /* Tank was on edge of an ODD map - bad news!  */
    
    } else if (direction == RIGHT && tankx[tank] < 40) {
        return(0);  /* Tank was not on edge.  */
        
    } else if (direction == RIGHT && (tankm[tank] % 2)) {
        tankx[tank] = 1;
        tankm[tank] = tankm[tank] + 1;
        return(2); /* Tank was on ODD map edge - adjust and ok */
    
    } else if(direction == RIGHT) {
        return(1);  /* Tank was on edge of EVEN map - bad news! */
    
    } else if (direction == UP && tanky[tank] > 1) {
        return(0);  /* Tank was not at edge.  */
    
    } else if(direction == UP && tankm[tank] > 2) {
        tanky[tank] = 20;
        tankm[tank] = tankm[tank] - 2;
        return(2);  /* tank rose a map - adjust and ok */
    
    } else if (direction == UP ) {
        return(1); /* Tank tried to go off top of map */
        
    } else if (direction == DOWN && tanky[tank] < 20) {
        return(0);  /* Tank was not at edge. */
    
    } else if(direction == DOWN && tankm[tank] < 7) {
        tanky[tank]=1;
        tankm[tank]=tankm[tank]+2;
        return(2);  /* tank descended a map */
    
    } else if(direction == DOWN) {
        return(1); /* Tank was on bottom.... */
        
    } else {
        /* all possibilities *SHOULD* be covered by now..
         but - just in case...  */
        return(0);
    }
}

/*  UpdateTank(tank #) - updates display of tanks moves   */
void update(int tank) {
    convert(tanky[tank],tankx[tank],tankm[tank]);
    twas[tank]=bigmap[realy] [realx];
    if((twas[tank] !='B') && (twas[tank] != 'D'))
        bigmap[realy] [realx] = 48+tank;
    move(10,6);
    wprintw(stdscr,"Tank X is %d ",tankx[tank]);
    move(10,7);
    wprintw(stdscr,"Tank Y is %d ",tanky[tank]);
    move(10,8);
    wprintw(stdscr,"Tank M is %d",tankm[tank]);
    move(10,9);
    wprintw(stdscr,"Contents of TWAS is %c",twas[tank]);
    move(10,10);
    wprintw(stdscr,"Tank # = %d",tank);
    
}


/*  ERASETANK(tank #) - removes old image of tanks from screen */
void erasetank(int tank) {
    convert(tanky[tank],tankx[tank],tankm[tank]);
    bigmap[realy] [realx]=twas[tank];
    if(tankm[tank] == map) {
        move(tankx[tank]+39,tanky[tank]+1);
        wprintw(stdscr,"%c",twas[tank]);
    }
}

/* ShowTank(tank #) - Displays currently selected tank IF on current map */
void showtank( int tank ) {
    int a,b,c,d;
    if (tankm[tank] == map) {
        if (tankx[tank] == 1) {
            a=0;
        
        } else if (tankx[tank] == 2) {
            a=1;
        
        } else {
            a=2;
        }
        
        if(tankx[tank]==40)
            c=0;
        else if(tankx[tank]==39)
            c=1;
        else c=2;
        
        if(tanky[tank]==1)
            b=0;
        else if(tanky[tank]==2)
            b=1;
        else b=2;
        
        if(tanky[tank]==20)
            d=0;
        else if(tanky[tank]==19)
            d=1;
        else d=2;
        
        movetext(31-a,19-b,31+c,19+d,tankx[tank]+39-a,tanky[tank]+1-b);
        
        
    }
    return(0);
}


/* Remote - this simulates tasking in background */
remote()
{
    zx=zx+1;
    if (zx==100)
        zx=0;
    
    move(10,11);
    wprintw(stdscr,"Count is %d and counting.",zx);
    return(0);
}
/* Initialize game - get base co-ordinates  */
initgame()
{
    int loop;
    move(2,5);
    printf("Enter base co-ords X,Y,Map ");
    scanf("%d,%d,%d",&basex,&basey,&basem);
    convert(basey,basex,basem);
    bigmap[realy][realx]='B';
    for(loop=1; loop<=8; loop++)
    {
        tankx[loop]=basex;
        tanky[loop]=basey;
        tankm[loop]=basem;
        if(loop<4)
        {
            decoyx[loop]=basex+(4*(loop-1))+2;
            decoyy[loop]=basey+(4*(loop-1))+2;
            decoym[loop]=basem;
            convert(decoyy[loop],decoyx[loop],decoym[loop]);
            bigmap[realy][realx]='D';
        }
        
    }
    return(0);
}
/* Update Tank viewport                     */
tankview(tank)
int tank;
{
    int x,y;
    convert(tanky[tank],tankx[tank],tankm[tank]);
    for(x=0; x<=4; x++)
        for(y=0; y<=4; y++)
        {
            move(29+x,17+y);
            wprintw(stdscr,"%c",bigmap[realy-2+y] [realx-2+x]);
        }
    showtank(tank);
    return(0);
}

/* Update Base viewport */
baseview()
{
    int x,y;
    convert(basey,basex,basem);
    for(x=0; x<=4; x++)
        for(y=0; y<=4; y++)
        {
            move(17+x,17+y);
            wprintw(stdscr,"%c",bigmap[realy-2+y][realx-2+x]);
        }
    return(0);
}

/* Update Decoy viewport */
decoyview(decoy)
int decoy;
{
    int x,y;
    convert(decoyy[decoy],decoyx[decoy],decoym[decoy]);
    for(x=0; x<=4; x++)
        for(y=0; y<=4; y++)
        {
            move(5+x,17+y);
            wprintw(stdscr,"%c",bigmap[realy-2+y][realx-2+x]);
        }
    return(0);
}

/* Convert Tank Psuedo co-ords into actual BigMap Co-ords */
convert(y,x,map)
int y,x,map;
{
    if(map % 2)
        realx = x+2;
        else realx = x+42;
            realy=y+2+((map+1)/2-1)*20;
            return(0);
}

/* Package all view handling nice and neat */
views()
{
    tankview(tank);
    baseview();
    decoyview(decoy);
    return(0);
}
