//
//  main.c
//  08_02
//
//  Created by Jim Veneskey on 1/23/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


// function prototypes
int getNumber(void);
void tooSmall(void);
void tooLarge(void);
void justRight(void);
void checkError(int num);

int main(int argc, const char * argv[]) {
    // insert code here...
    int num = getNumber();
    
    // 'else if' optimized
    
    if ((num >= 0) && (num <= 100)) {
        justRight();
    } else {
        checkError(num);
    }
    
    return 0;
}

// External functions

int getNumber(void) {
    int num;
    printf("Enter a number between 0 and 100 inclusive: ");
    scanf("%d", &num);
    return num;
}

// new error handler
void checkError(int num) {
    // too small?
    if (num < 0) {
        tooSmall();
    }
    else {
        // must be too large
        tooLarge();
    }
}

void tooSmall(void) {
    printf("The number is too small\n");
}

void tooLarge(void) {
    printf("The number is too large\n");
}

void justRight(void) {
    printf("The number is within the correct range\n");
}