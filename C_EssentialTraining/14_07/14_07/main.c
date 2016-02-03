//
//  main.c
//  14_07 - returning values from functions
//
//  Created by jim Veneskey on 2/3/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


// Globals
double temperature; // Note - not initialized

// function prototypes
void measure(void);
int func(void);
void funcByRef(int *i, int *j);

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = func();
    printf("After func(), n = %d\n", n);
    
    measure();
    printf("After measure(), temperature = %.1f\n", temperature);
    
    int a,b; // Note - not initialized
    funcByRef(&a, &b);
    printf("After funcByRef(), a = %d, b = %d\n", a, b);
    return EXIT_SUCCESS;
}

int func(void) {
        // this function simply returns a value
    int value = 12;
    return value;
}

void measure(void) {
    // this function modifies a global value
    temperature = 50.2;
}

void funcByRef(int *i, int *j) {
    // This function modifies the values of the variables passed to it
    *i = 42;
    *j = 105;
}

