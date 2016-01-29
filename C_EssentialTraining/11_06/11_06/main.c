//
//  main.c
//  11_06 - managing memory using malloc
//
//  Created by jim Veneskey on 1/28/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    // Static arrays waste memory
    // Guaranteed to allocate 20 integers
    // int staticArray[20];
    
    // Dynamic arrays save memory by creating a pointer that stores
    // the beginning of the array
    int *dynamicArray = malloc(20 * sizeof(int));
    *dynamicArray = 10;
    printf("Address %x contains value %d\n", dynamicArray, *dynamicArray);
    
    // assign an element
    dynamicArray[1] = 20;
    printf("dynamicArray[1] now contains value %d\n", dynamicArray[1]);
    printf("The size of dynamicArray is %d\n", sizeof(dynamicArray));
    
    // Release unused memory:
    free(dynamicArray);
    
    // prove that the used portion is still there
    printf("dynamicArray[1] still contains value %d\n", dynamicArray[1]);
    // display the new size
    printf("The size of dynamicArray is now %d\n", sizeof(dynamicArray));
    return EXIT_SUCCESS;

}
