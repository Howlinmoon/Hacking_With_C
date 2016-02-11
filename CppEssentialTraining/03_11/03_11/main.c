//
//  main.c
//  03_11 - Loops
//
//  Created by jim Veneskey on 2/11/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    int x = 5;
    // while loops
    while (x > 0) {
        printf("x is %d\n", x);
        x = x - 1;
    }

    // can be done this way also
    // simply using 'x' as a boolean, non-zero = True
    x = 5;
    while (x) {
        printf("2nd x is %d\n", x);
        x = x - 1;
    }
    
    // the do__while loop
    
    
    x = 5;
    do {
        printf("do x is %d\n", x);
        x = x - 1;
    } while (x);
    
    // showing what happens when you do the check before decrement
    
    x = 5;
    while (x--) {
        printf("check before dec x is %d\n", x);
    }

    // finally, showing what happens when you do the decrement before check
    
    x = 5;
    while (--x) {
        printf("dec before check x is %d\n", x);
    }

    
    return 0;
}
