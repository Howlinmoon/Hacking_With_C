//
//  main.c
//  14_06 - passing arrays to a function
//
//  Created by jim Veneskey on 2/3/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void func1(int array[]);
void func2(int *array);


int main(int argc, const char * argv[]) {
    // insert code here...
    int list[5] = {5, 7, 9, 23, 15};
    
    // call the two functions with the same data
    func1(list);
    func2(list);
    
    
    
    return EXIT_SUCCESS;
}

// function definitions

void func1(int array[]) {
    printf("Inside of func1, array[3] = %d\n", array[3]);
}

void func2(int *array) {
    printf("Inside of func2, array[3] = %d\n", array[3]);
}