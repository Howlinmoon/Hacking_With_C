//
//  main.c
//  11_05 - pointers and arrays
//
//  Created by jim Veneskey on 1/28/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    // declare our integer array
    int data[] = { 15, 20, 30, 45, 100, 60, 2000 };
    
    // declare and init our pointer to the start of the array
    int *ptr = data;
    
    printf("data[] starts at address %x with value %d\n", ptr, *ptr);
    
    // Calculate the length of the array
    int numElements = sizeof(data) / sizeof(int);
    printf("There are %d elements in data[]\n", numElements);
    
    // print them out
    for (int i = 0; i < numElements; i++) {
        printf("Address %x contains value %d\n", ptr, *ptr);
        ptr++;
    }
    
    return EXIT_SUCCESS;
}
