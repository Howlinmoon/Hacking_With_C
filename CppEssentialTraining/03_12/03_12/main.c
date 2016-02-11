//
//  main.c
//  03_12 - for loops
//
//  Created by jim Veneskey on 2/11/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    
    // Comparing While loops to equivalent For loops
    
    int x = 5;
    while (x) {
        printf("while x = %d\n", x);
        x--;
    }
    
    for (int x = 5; x; x--) {
        printf("for x = %d\n", x);
    }
    
    // iterating through an integer array
    // with a pointer
    
    int ia[] = {1, 2, 3, 4, 5, 0 };
    
    for (int *ip = ia; *ip; ip++) {
        printf("ip pointer is now pointing to %d\n", *ip);
    }
    
    
    return 0;
}
