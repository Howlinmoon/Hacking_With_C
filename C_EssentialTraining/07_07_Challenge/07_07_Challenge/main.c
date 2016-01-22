//
//  main.c
//  07_07_Challenge Recursion
//
//  Created by jim Veneskey on 1/22/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Our recursion function prototype

void recursion(int lowerValue, int upperValue);

// Our recursion call counter
int counter = 0;

int main(int argc, const char * argv[]) {
    // insert code here...

    int lower, upper;
    
    printf("Please enter the lower boundary value: ");
    scanf("%d", &lower);
    printf("Please enter the upper boundary value: ");
    scanf("%d", &upper);
    
    printf("Calling the recursion function!\n\n");
    
    recursion(lower, upper);
    
    return 0;
}

void recursion(int lowerValue, int upperValue) {
    // increment the call counter by one
    counter++;
    printf("Recursion call counter: %d\n", counter);
    
    printf("Current Lower Value: %d\n", lowerValue);
    
    if (lowerValue < upperValue) {
        lowerValue++;
        recursion(lowerValue, upperValue);
    }
}