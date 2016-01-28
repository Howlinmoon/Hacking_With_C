//
//  main.c
//  11_03 - declaring and using pointers
//
//  Created by jim Veneskey on 1/28/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    // Create the normal int var
    int size = 15;
    
    // Create the corresponding int pointer
    int *ptr;
    
    // initialize the pointer to point to the int var's contents
    ptr = &size;
    
    // Display what is there as proof
    
    printf("Pointer contains address: %x which is pointing to value: %d\n", ptr, *ptr);
    
    
    
    return EXIT_SUCCESS;
}
