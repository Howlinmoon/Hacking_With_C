//
//  main.c
//  14_08 - refining prototypes
//
//  Created by jim Veneskey on 2/3/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Prototypes are defined here
// note - no sample var names included, just their types
double func(double, double);

int main(int argc, const char * argv[]) {
    // insert code here...

    double result = func(10, 20);
    printf("Result = %lf\n", result);
    
    
    return EXIT_SUCCESS;
}

// function definitions

double func(double x, double y) {
    return x * y;
}
