//
//  main.c
//  13_01 - sequential files
//
//  Created by jim Veneskey on 1/29/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//Function prototypes
void readEntireFile(void);
void readUntilMarker(char marker);
void writeToFile(void);

int main(void) {
    
    //readEntireFile();
    //printf("\n--------------------------------\n");
    //readUntilMarker('m');
    writeToFile();
    
    printf("\n");
    return EXIT_SUCCESS;
}

void readEntireFile(void) {
    int ch;
    FILE *fp;  // pointer to a file type
    fp = fopen("/Users/biff/Dropbox/C_Workspace/C_EssentialTraining/13_01/13_01/message1301", "r"); // Change to match your path
    printf("File should have been opened...\n");
    ch = getc(fp);
    while (ch != EOF) {  // keep looping until End Of File
        putchar(ch);    // print the characters read
        ch = getc(fp);
    }
    fclose(fp);
}

void readUntilMarker(char marker) {
    int ch;
    FILE *fp;  // pointer to a file type
    fp = fopen("/Users/biff/Dropbox/C_Workspace/C_EssentialTraining/13_01/13_01/message1301", "r"); // Change to match your path
    ch = getc(fp);
    while (ch != marker) {  // keep looping until we reach the marker character
        putchar(ch);       // print the characters read
        ch = getc(fp);
    }
    fclose(fp);
}

void writeToFile(void) {
    FILE *fp;  // pointer to a file type
    fp = fopen("/Users/biff/Dropbox/C_Workspace/C_EssentialTraining/13_01/13_01/message2", "w"); // Change to match your path
    char name[10] = "You!";
    fprintf(fp,"This message is for %s\n",name);
    fclose(fp);
}
