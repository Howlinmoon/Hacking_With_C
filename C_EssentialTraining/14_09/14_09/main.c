//
//  main.c
//  14_09
//
//  Created by jim Veneskey on 2/3/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


int fibonacci(int n) {
    // the following printf is used for tracing through this function
    
    // printf("n = %d\n", n);
    
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        // here is where it gets fun
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// generate a series of fib numbers
void generateFibonacci(int numbers) {
    // display the first <numbers> values
    // in the Fibonacci series
    // unlike the original, I used 'i' here instead of wasting it and using 'n'
    for (int i = 0; i < numbers; i++) {
        printf("[%2d]: %5d\n", i, fibonacci(i));
    }
}

// no need for prototypes since main is way down here!

int main(int argc, const char * argv[]) {
    // insert code here...
    generateFibonacci(25);

    return EXIT_SUCCESS;
}
