//
//  main.c
//  09_01 - Loops
//
//  Created by jim Veneskey on 1/26/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// function prototypes
void listEvenNumbers(void);
void listOddNumbers(void);

int main(int argc, const char * argv[]) {
    // insert code here...
    listEvenNumbers();
    listOddNumbers();
    
    return EXIT_SUCCESS;
}

// function definitions

void listEvenNumbers(void) {
    printf("All of the even numbers between 0 and 100\n");
    
    // in this case - i only exists in the for loop construct
    for (int i = 0; i <= 100; i += 2) {
        printf("%d\n",i);
    }
    
    // the following is an error if uncommented
    // i = 5;
}

void listOddNumbers(void) {
    printf("All of the odd numbers between 1 and 101\n");
    
    int i;
    
    for (i = 1; i <= 101; i += 2) {
        printf("%d\n",i);
    }
}
