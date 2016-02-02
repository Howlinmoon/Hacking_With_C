//
//  main.c
//  14_05 passing variables by value or by reference
//
//  Created by jim Veneskey on 2/2/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// function prototypes
// pass by value
void someFunction(int a, int b);
// pass by reference
void someOtherFunction(int *a, int *b);


int main(int argc, const char * argv[]) {
    // insert code here...

    printf("---- Passing By Value ----\n");
    int x = 0;
    int y = 0;
    
    printf("Before calling someFunction: x = %d, y = %d\n", x, y);
    someFunction(x, y);
    printf("After calling someFunction: x = %d, y = %d\n", x, y);
    
    
    printf("----- Passing By Reference -----\n");
    
    // redundantly reset x and y to 0
    x = 0;
    y = 0;
    
    printf("Before calling someOtherFunction: x = %d, y = %d\n", x, y);
    someOtherFunction(&x, &y);
    printf("After calling someOtherFunction: x = %d, y = %d\n", x, y);
    
    
    return EXIT_SUCCESS;
}


void someFunction(int a, int b) {
    printf("someFunction received: a=%d, b=%d\n", a, b);
    // re-asssign a & b
    a = 111;
    b = 222;
    printf("After modification, someFunction: a=%d, b=%d\n", a, b);
}

void someOtherFunction(int *a, int *b) {
    // display the contents of the addresses we were passed
    printf("someOtherFunction received: a=%d, b=%d\n", *a, *b);
    // re-asssign the contents of the addresses we were passed
    *a = 111;
    *b = 222;
    // presto changeo - and now they contain
    printf("After modification, someOtherFunction: a=%d, b=%d\n", *a, *b);
}