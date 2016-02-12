//
//  main.c
//  04_07 - working with continuation characters
//
//  Created by jim Veneskey on 2/12/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

#define SWAP(a, b) do { \
                        a ^= b; \
                        b ^= a; \
                        a ^= b; \
                    } while (0)


int main(int argc, const char * argv[]) {
    // insert code here...
    // line continuation sequence - prefixing a line break with a '\'
    // makes it inconsequential...
    
    printf("Hello,\
           World!\n");
    
    int this = 7;
    int that = 9;
    printf("this is %d and that is %d\n", this, that);
    SWAP(this, that);
    printf("this is %d and that is %d\n", this, that);
    
    return 0;
}
