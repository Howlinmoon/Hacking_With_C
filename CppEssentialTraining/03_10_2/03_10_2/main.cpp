//
//  main.cpp
//  03_10_2
//
//  Created by jim Veneskey on 2/11/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <iostream>
#include <stdio.h>

const int iOne = 1;
const int iTwo = 2;
const int iThree = 3;
const int iFour = 4;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int foo = 5;
    switch (foo) {
        case iOne:
            printf("one\n");
            break;
        case iTwo:
            printf("two\n");
            break;
        case iThree:
            printf("three\n");
            break;
        case iFour:
            printf("four\n");
            break;
        default:
            printf("the value is not 1, 2, 3 or 4\n");
    }
    
    return 0;
}