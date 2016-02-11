//
//  main.c
//  03_09 - comparing with conditionals
//
//  Created by jim Veneskey on 2/11/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    // in C, 1 = True, 0 = False
    int a = 0;
    int b = 1;
    
    if (a) {
        puts("a is True");
    } else {
        puts("a is False");
    }

    if (b) {
        puts("b is True");
    } else {
        puts("b is False");
    }

    // terninary conditional operator
    // if a is True, c = 7, otherwise, 9
    int c = a ? 7 : 9;
    
    // slightly more complex
    // if a is 5, then d = 10, otherwise, d = 20
    int d = a == 5 ? 10 : 20;
    
    printf("c is %d\n", c);
    printf("d is %d\n", d);
    
    return 0;
}
