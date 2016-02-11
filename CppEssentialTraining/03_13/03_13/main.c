//
//  main.c
//  03_13 - functions
//
//  Created by jim Veneskey on 2/11/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
//#include "func.h"

int func(int something) {
    printf("this is in the function\n");
    // add 25 to the variable
    something += 25;
    printf("the function variable something is now %d\n", something);
    return something + 10;
}


int main( int argc, char ** argv ) {
    // main says something
    printf("Hello, World!\n");
    
    // func says something
    printf("the value of func something + 10 is %d\n", func(40));
    return 0;
}