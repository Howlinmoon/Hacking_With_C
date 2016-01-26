//
//  main.c
//  09_02 for loop vs recursion
//
//  Created by jim Veneskey on 1/26/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// function prototypes
void listEvenNumbers(void);
void listEvenNumbersRecursive(int k);

int main(int argc, const char * argv[]) {
    // insert code here...
    listEvenNumbers();
    printf("\nAll EVEN numbers between 0 and 100 recursively\n");
    listEvenNumbersRecursive(0);

    return EXIT_SUCCESS;
}

void listEvenNumbers(void) {
    printf("All even numbers between 0 and 100 via a for loop\n");
    for (int k = 0; k <= 100; k += 2) {
        printf("%d\n",k);
    }
}

void listEvenNumbersRecursive(int k) {
    // doing it via recursion
    
    if (k <= 100) {
        printf("%d\n", k);
        // now the key - print the next in the series
        listEvenNumbersRecursive(k+2);
    }
}