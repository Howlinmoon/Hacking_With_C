//
//  main.c
//  08_01
//
//  Created by jim Veneskey on 1/22/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


// function prototypes
int getNumber(void);
void tooSmall(void);
void tooLarge(void);
void justRight(void);

int main(int argc, const char * argv[]) {
    // insert code here...
    int num = getNumber();
    
    /* original code
     
     
     if (num < 0) {
        tooSmall();
     }
     
     if (num > 100) {
        tooLarge();
     } 
     
     if ( (num >= 0) && (num <= 100) ) {
        justRight();
     
     */
    
    
    // 'else if' optimized
    
    if (num < 0) {
        tooSmall();
    } else if (num > 100) {
        tooLarge();
    } else {
        justRight();
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

void tooSmall(void) {
    printf("The number is too small\n");
}

void tooLarge(void) {
    printf("The number is too large\n");
}

void justRight(void) {
    printf("The number is within the correct range\n");
}