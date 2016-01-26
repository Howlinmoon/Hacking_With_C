//
//  main.c
//  09_04 DO WHILE loop
//
//  Created by jim Veneskey on 1/26/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1;
#define FALSE 0;

// function prototypes
void getInputData1(void);
void getInputData2(void);

int main(int argc, const char * argv[]) {
    // insert code here...
    //getInputData1();
    getInputData2();
    
    return EXIT_SUCCESS;
}

// functions

// using WHILE loop

void getInputData1(void) {
    char c = 'x';
    int testVariable = 0;
    
    while (c != 'x') {
        testVariable = 999;
        printf("Enter a letter please: ");
        c = getchar();
        printf("You entered: %c\n",c);
        getchar();
    }
    
    printf("You entered 'x' and the loop exited\n");
    printf("testVariable = %d\n", testVariable);
}

// using DO WHILE
void getInputData2(void) {
    char c = 'x';
    int testVariable = 0;
    
    do {
        testVariable = 999;
        printf("Enter a letter please: ");
        c = getchar();
        printf("You entered: %c\n", c);
        getchar();
    } while (c != 'x');

    printf("You entered 'x' and the loop exited\n");
    printf("testVariable = %d\n", testVariable);
    
}
