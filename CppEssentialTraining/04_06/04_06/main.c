//
//  main.c
//  04_06 common problems, caveats with macros
//
//  Created by jim Veneskey on 2/12/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

// a simple max comparison macro
#define MAX(a, b) ( (a) > (b) ? (a) : (b) )


int increment() {
    // static allows the variable to retain its value
    // between calls
    static int i = 42;
    i += 5;
    printf("increment returns %d\n", i);
    return i;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int x = 50;
    printf("Max of %d and %d is %d\n", x, increment(), MAX(x, increment()));
    printf("Max of %d and %d is %d\n", x, increment(), MAX(x, increment()));
    
    // Proper way to do this type of deal
    int tempVal = increment();
    printf("Max of %d and %d is %d\n", x, tempVal, MAX(x, tempVal) );
    
    return 0;
}
