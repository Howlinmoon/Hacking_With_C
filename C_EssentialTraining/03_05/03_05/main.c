//
//  main.c
//  03_05
//
//  Created by jim Veneskey on 1/18/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// an alternative to importing stdbool.h is to create your own type

typedef int Bool;
#define True 1;
#define False 0;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    Bool aBooleanVariable;
    aBooleanVariable = True;
    printf("The value of aBooleanVariable is %d\n", aBooleanVariable);
    
    return 0;
}
