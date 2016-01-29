//
//  main.c
//  12_04 - Unions
//
//  Created by jim Veneskey on 1/29/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, const char * argv[]) {
    // insert code here...

    // Example 1
    union symbol {
        int number;
        char letter;
    };
    
    // define a union named value
    union symbol value;
    value.number = 25;
    value.letter = 'm';
    
    union symbol *ptr; // a union type pointer
    // point it to our sample union
    ptr = &value;
    
    char myLetter = ptr->letter;
    
    printf("Letter field: %c\n", myLetter);
    
    // does number still exist?
    printf("Number field: %d\n", value.number);
    // 109 is the ASCII code for 'm', number has been overwritten.
    
    return EXIT_SUCCESS;
}
