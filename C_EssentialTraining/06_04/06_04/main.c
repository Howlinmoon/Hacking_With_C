//
//  main.c
//  06_04
//
//  Created by jim Veneskey on 1/20/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    // Bit level operations
    puts("Bit-level calculations:");
    puts("-----------------------");
    
    
    unsigned int x = 10;
    unsigned int y = 1;
    unsigned int result;
    
    // bit level AND
    result = x & y;
    printf("x & y = %d\n", result);
    
    // bit level OR
    result = x | y;
    printf("x | y = %d\n", result);
    
    // bit level XOR
    result = x ^ y;
    printf("x ^ y = %d\n", result);
    
    
    // bit shifting
    
    // right shift by 1, dividing by 2
    
    result = x >> 1;
    printf("x >> 1 = %d\n", result);
    
    // left shift by 1, multiplying by 2
    result = y << 1;
    printf("y << 1 = %d\n", result);
    
    
    return 0;
}
