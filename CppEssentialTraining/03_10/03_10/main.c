//
//  main.c
//  03_10 - using switch statements
//
//  Created by jim Veneskey on 2/11/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    int foo = 3;
    switch (foo) {
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
        case 4:
            printf("four\n");
            break;
    }
    
    return 0;
}
