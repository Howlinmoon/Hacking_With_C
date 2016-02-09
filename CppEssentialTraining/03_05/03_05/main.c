//
//  main.c
//  03_05 scope and storage classes
//
//  Created by jim Veneskey on 2/9/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

// context matters, the variable needs to be declared in the correct scope
// and prior to it being used

// bring in the externally defined function
extern void func();
// and the externally defined variable
extern int var;

int main(int argc, const char * argv[]) {

    // calling the externally defined function here
    func();
    printf("The externally declared variable is: %d\n", var);
    // static prevents 'number' from being re-initialized to 7 each time through the loop!
    for (int i = 1; i <= 5; i++) {
        static int number = 7;
        register int regVar = 5; // used as a guideline, not a rule
        printf("number variable is: %d\n", number++);
        printf("regVar variable is: %d\n", regVar++);
        number = number * 10;
    }
    return 0;
}

