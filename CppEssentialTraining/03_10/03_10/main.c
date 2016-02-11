//
//  main.c
//  03_10 - using switch statements
//
//  Created by jim Veneskey on 2/11/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

#define ONE (1)
#define TWO (2)
#define THREE (3)
#define FOUR (4)


int main(int argc, const char * argv[]) {
    // insert code here...

    int foo = 5;
    switch (foo) {
        case ONE:
            printf("one\n");
            break;
        case TWO:
            printf("two\n");
            break;
        case THREE:
            printf("three\n");
            break;
        case FOUR:
            printf("four\n");
            break;
        default:
            printf("the value is not 1, 2, 3 or 4\n");
    }
    
    return 0;
}
