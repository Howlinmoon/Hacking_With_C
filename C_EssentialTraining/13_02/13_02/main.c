//
//  main.c
//  13_02 - Random Files
//
//  Created by jim Veneskey on 2/1/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Function prototypes
void readAndVerify(void);
void addTextToLocation(void);

int main(int argc, const char * argv[]) {
    // insert code here...

    //readAndVerify();
    addTextToLocation();
    
    return EXIT_SUCCESS;
}

// function declarations

void readAndVerify() {
    
    FILE *fp; // pointer to a file type
    char messageToWrite[] = "This message will be written to a file";
    
    // this array will store up to 30 characters read from the file
    char textBuffer[30];
    
    // open the file for read/write using the w+ directive
    fp = fopen("/Users/biff/Dropbox/C_Workspace/C_EssentialTraining/13_02/13_02/message.txt", "w+");
    fwrite(messageToWrite, strlen(messageToWrite)+1, 1, fp);
    
    // return to the beginning of the file using fseek
    fseek(fp, SEEK_SET, 0);
    
    // Verify the message has been written by reading the file
    // Read the same number of characters as the ones written above
    fread(textBuffer, strlen(messageToWrite)+1, 1, fp);
    
    // print it out
    printf("%s\n", textBuffer);
    fclose(fp);
    
}


void addTextToLocation() {
    FILE *fp;
    
    fp = fopen("/Users/biff/Dropbox/C_Workspace/C_EssentialTraining/13_02/13_02/message.txt", "w+");
    fputs("Not Much to say today", fp);
    
    // now to modify what we just wrote
    
    fseek(fp, 8, SEEK_SET);
    // starting from position 8 - overwrite
    fputs(" to talk about", fp);
    
    fclose(fp);
}
