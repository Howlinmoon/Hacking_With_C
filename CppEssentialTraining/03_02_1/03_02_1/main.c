//
//  main.c
//  03_02_1 statements and expressions
//
//  Created by jim Veneskey on 2/9/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    for (int i = 1; i <= 5; i++) {
        int x = printf("Hello, World!123456\n") * i;
        printf("The 'Hello World' printf returned %d\n", x);
    }
    return 0;
}
