//
//  main.c
//  03_13 - functions
//
//  Created by jim Veneskey on 2/11/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include "func.h"



int main( int argc, char ** argv ) {
    // main says something
    printf("Hello, World!\n");
    
    int y = 50;
    printf("the value of y was %d\n", y);
    int x = func(&y);
    // func says something
    printf("the value of x is %d\n", x);
    printf("the value of y is now %d\n", y);
    return 0;
}


int func(int *something) {
    printf("this is in the function\n");
    // add 25 to the variable (y)
    *something += 25;
    printf("the function variable something is now %d\n", *something);
    return 10;
}
