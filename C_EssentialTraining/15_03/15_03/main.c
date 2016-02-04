//
//  main.c
//  15_03 more on pre-processors
//
//  Created by jim Veneskey on 2/4/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// include user headers
#include "myHeaders1503.h"

// user defines
#undef MAX_PRICE
#define MAX_PRICE 100

#ifndef THRESHOLD
#define THRESHOLD 23.751
#endif

#define greet(name) \
    printf("THank you for shopping here, " #name "\n")
int main(int argc, const char * argv[]) {
    // insert code here...

    printf("MAX_PRICE = %d\n", MAX_PRICE);
    printf("THRESHOLD = %d\n", THRESHOLD);
    
    // this is a macro - NOT a function
    // this actually copies and replaces code with what
    // is defined in the macro
    greet(Jim Veneskey);
    
    printf("Some pre-defined C macros\n");
    printf("__FILE__ Name: %s\n", __FILE__);
    printf("__DATE__ : %s\n", __DATE__);
    printf("__TIME__ :%s\n", __TIME__);
    printf("This line is __LINE__ : %d\n", __LINE__);
    printf("__STDC__ : %d\n", __STDC__);
    
    return EXIT_SUCCESS;
}
