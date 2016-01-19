//
//  main.c
//  05_02
//
//  Created by jim Veneskey on 1/19/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>

int main(void) {
    puts("What is going on here?");
    //Some variables can be declared here as a group
    int x;
    int y;
    int z;
    
    z = x + y;
    
    //Some variables can be declared right before they are needed
    char a;
    // no prompt for user input is very bad practice
    a = getchar();
    
    char b;
    b = getchar();
    
    char c;
    c = getchar();
    
    //The following is correct but would you really
    //want to write code like this?
    
    double xx=2.3;double yy=1.2;double zz=2.3;printf("value of xx=%f",xx);/*i am a comment*/printf("value of yy=%f",yy);printf("value of zz=%f",zz);
    
    
    return EXIT_SUCCESS;
}

