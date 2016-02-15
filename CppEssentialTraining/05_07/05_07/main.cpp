//
//  main.cpp
//  05_07 - Qualifiers
//
//  Created by jim Veneskey on 2/15/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
    const int i = 47;
    
    // need to comment out the re-assignment, otherwise it generates an error with constant
    //i = 122;
    
    printf("The integer is %d\n", i);
    
    // static example
    // note how 'j' is only initialized to 12 ONCE
    for (int i = 0; i < 5; i++) {
        static int j = 12;
        j += i;
        printf("i is %d, j is %d\n", i, j);
    }
    
    
    return 0;
}