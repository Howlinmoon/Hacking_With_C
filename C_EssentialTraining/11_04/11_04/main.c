//
//  main.c
//  11_04 - pointer arithmetic
//
//  Created by jim Veneskey on 1/28/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    // initialize the array we'll be using
    int sizes[] = { 15, 20, 30 };
    
    
    // declare a pointer, and initialize it to the int array
    int *ptr = sizes; //ptr points to the start of the array
    printf("Address %x contains value %d\n", ptr, *ptr);
    
    ptr++; // now pointing to the second value in the array
    printf("Address %x contains value %d\n", ptr, *ptr);

    ptr++; // now pointing to the third value in the array
    printf("Address %x contains value %d\n", ptr, *ptr);
    
    // rewind the pointer two spots
    
    ptr--;
    ptr--; // should now be pointing to the first value in the array again
    printf("Address %x contains value %d\n", ptr, *ptr);
    
    
    return EXIT_SUCCESS;
}
