//
//  main.c
//  09_03 - while loop
//
//  Created by jim Veneskey on 1/26/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1;
#define FALSE 0;

// Function prototypes
void whileLoop(int n);
void getInputData(void);

int main(int argc, const char * argv[]) {
    // insert code here...
    //whileLoop(1);
    getInputData();
    return EXIT_SUCCESS;
}

// functions

void whileLoop(int n) {
    int flag = FALSE;
    while (! flag) {
        printf("%d\n", n);
        n++;
        if (n >= 10) {
            flag = TRUE;
        }
    }
}

void getInputData(void) {
    char c = 0;
    while (c != 'x') {
        printf("Please enter a letter - 'x' to exit: ");
        c = getchar();
        printf("You entered: %c\n", c);
        getchar();
    }
    
    printf("You entered an 'x' - this will now stop\n");
}
