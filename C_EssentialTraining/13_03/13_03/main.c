//
//  main.c
//  13_03 - file summary examples
//
//  Created by jim Veneskey on 2/1/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// function prototypes
void copyFromSourceToDestination(void);
void appendCopyrightNotice(void);


int main(int argc, const char * argv[]) {
    // insert code here...

    //copyFromSourceToDestination();
    appendCopyrightNotice();

    return EXIT_SUCCESS;
}

// function definitions

void copyFromSourceToDestination() {
    int ch;
    FILE *src, *dest;  // file pointers
    src = fopen("/Users/biff/Dropbox/C_Workspace/C_EssentialTraining/13_03/13_03/sourceFile.txt", "r");
    dest = fopen("/Users/biff/Dropbox/C_Workspace/C_EssentialTraining/13_03/13_03/destinationFile.txt", "w");
    ch = getc(src);
    
    while (ch != EOF) {
        putc(ch, dest);
        ch = getc(src);
    }
    
    // close both files
    fclose(src);
    fclose(dest);
}

void appendCopyrightNotice() {
    FILE *fp;
    // open the destination file to append the copyright notice
    fp = fopen("/Users/biff/Dropbox/C_Workspace/C_EssentialTraining/13_03/13_03/destinationFile.txt", "a");
    fprintf(fp, "\n\nCopyright 2016, your name here\n");
    
    fclose(fp);
}
