//
//  main.c
//  04_05 - macros
//
//  Created by jim Veneskey on 2/12/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

// a simple constant like macro
#define CONSTANT 1

// a bit more complex macro
// takes to parameters, a & b, and multiplies them together
#define MACRO1(a, b) (a * b)


int main(int argc, const char * argv[]) {
    // insert code here...

    int this = 5;
    int that = 7;
    
    printf("this: %d, that: %d, result: %d\n", this, that, MACRO1(this, that));
    
    
    return 0;
}
