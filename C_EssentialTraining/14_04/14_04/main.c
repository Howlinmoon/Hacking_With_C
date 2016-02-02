//
//  main.c
//  14_04 Global vs Local variables
//
//  Created by jim Veneskey on 2/2/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


// Function Prototypes
void changeNumber(int a);
void changeNumberDifferently(int a);

// Global Variables
int a = 0;
int b = 0;
int c = 0;


int main(int argc, const char * argv[]) {
    // insert code here...

    printf("In main, a = %d\n", a);
    changeNumber(a);
    printf("Now in main, a = %d\n", a);
    
    changeNumberDifferently(a);
    printf("After differently, in main, a = %d\n", a);
    printf("After differently, in main, b = %d\n", b);
    printf("After differently, in main, c = %d\n", c);
    
    
    
    return EXIT_SUCCESS;
}

void changeNumber(int a) {
    // assign 5 to the global version of 'a' ?
    a = 5;
    printf("inside changeNumber, a = %d\n", a);
}

void changeNumberDifferently(int a) {
    // assign values to the global versions of a & b
    a = -1;
    b = 3;
    // declare a local variable 'c'
    int c = -1;
    
    printf("Inside of changeNumberDifferently, a = %d\n", a);
    printf("Inside of changeNumberDifferently, b = %d\n", b);
    printf("Inside of changeNumberDifferently, c = %d\n", c);
}

