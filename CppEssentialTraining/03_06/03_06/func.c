//
//  main.c
//  03_06 - Declaring variables and functions prior to being used
//
//  Created by Jim Veneskey on 2/6/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//


#include <stdio.h>
#include "func.h"

// Defined a function prior to using it
// void func();


int main( int argc, char ** argv ) {
    int i = 42;
    for (int i = 1; i <= 5; i++) {
        // display inner i values
        printf("variable i is %d\n", i);
    }
    // display outter i value
    printf("variable i is %d\n", i);

    func();
	return 0;
}



void func() {
    printf("this is in the function\n");
}

