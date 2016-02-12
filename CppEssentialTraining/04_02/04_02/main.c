//
//  main.c
//  04_02 - constants
//
//  Created by jim Veneskey on 2/12/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

// equates 'ONE' with '1'
// a simple string substitution
#define ONE 1


// a real constant - note the semicolon, since this is now in C
const int iTwo = 2;

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("The ONE constant is %d\n", ONE);
    printf("The iTwo constant is %d\n", iTwo);
    
    return 0;
}
