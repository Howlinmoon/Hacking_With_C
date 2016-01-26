//
//  main.c
//  09_05 - breaking out of loops
//
//  Created by jim Veneskey on 1/26/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void testBreak(void);


int main(int argc, const char * argv[]) {
    // insert code here...
    testBreak();
    return EXIT_SUCCESS;
}

// function definitions

void testBreak(void) {
    int n;
    int loopCounter = 0;
    while (1) {
        printf("Cycle [%d]: Enter a number please: ", loopCounter);
        scanf("%d", &n);
        if ( (n == 0) || (loopCounter >= 10)) {
            break; // either reached our limit *or* you entered 0
        }
        loopCounter++;
    }
}