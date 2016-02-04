//
//  main.c
//  15_01 - Macros
//
//  Created by jim Veneskey on 2/4/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Object like Macros

#define NUMBERS 1, 2, 3

// Function like Macros
#define max(X, Y) ( (X) > (Y) ? (X) : (Y) )

int main(int argc, const char * argv[]) {
    // insert code here...

    // unused
    int list[] = { NUMBERS };
    
    int *p, *q, n;
    int val1 = 5, val2 = 12;
    
    p = &val1;
    q = &val2;
    n = 1;
    
    int x = max(p, q);
    int y = max(12, 5);
    int z = max(n + 5, *p);
    
    printf("x = %x since p = %x and q = %x\n", x, p, q);
    printf("y = %d\n", y);
    printf("z = %d since n+5 = %d and *p = %x\n", z, (n + 5), *p);
    
    return EXIT_SUCCESS;
}
