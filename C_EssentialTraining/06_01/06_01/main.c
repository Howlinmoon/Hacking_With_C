//
//  main.c
//  06_01
//
//  Created by jim Veneskey on 1/19/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    // arithmetic operations
    int x = 5;
    int y = 7;
    int sum, difference, product, division, modulus, increment, decrement;
    
    sum = x + y;
    printf("If x=%d and y=%d then:\n", x, y);
    printf("their sum = %d\n", sum);
    
    difference = x - y;
    printf("their difference = %d\n", difference);
    
    product = x * y;
    printf("their product = %d\n", product);
    
    division = x / y;
    printf("their quotient = %d\n", division);
    
    modulus = x % y;
    printf("their modulus result = %d\n", modulus);
    
    increment = ++x;
    printf("increment x = %d\n", x);
    
    decrement = --x;
    printf("decrement x = %d\n", x);
    
    puts(" ------------------------------ ");
    
    // exploring increment first, use after and
    // use first, increment after etc
    
    x = 1;
    ++x;
    
    printf("x = %d\n", x);
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);

    x = 1;
    --x;
    
    printf("x = %d\n", x);
    printf("x-- = %d\n", x--);
    printf("x = %d\n", x);

    
    return 0;
}
