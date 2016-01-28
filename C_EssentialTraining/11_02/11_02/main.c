//
//  main.c
//  11_02 - Declaring and initializing pointers
//
//  Created by jim Veneskey on 1/28/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    // Declaration
    
    // declaring a normal int, and assigning it a value
    int size = 15;
    
    // declaring an integer pointer
    
    int *pointerInt;
    
    // assigning the address of the normal int variable to the pointer
    
    pointerInt = &size;
    
    
    
    return EXIT_SUCCESS;
}
