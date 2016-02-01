//
//  main.c
//  14_03 - small comparison example
//
//  Created by jim Veneskey on 2/1/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// function prototype
int smallest(int x, int y);

int main(int argc, const char * argv[]) {
    // insert code here...

    int n = smallest('r', 'a');
    printf("n = %d\n", n);
    
    
    return EXIT_SUCCESS;
}

// functiond definitions

int smallest(int paramOne, int paramTwo) {
    
    // is the return type the same as the function type?
    // is the function name appropriate? descriptive?
    // Are the parameters correctly typed?
    
    int minValue;
    
    if (paramOne < paramTwo) {
        minValue = paramOne;
    } else {
        minValue = paramTwo;
    }
    
    return minValue;
}