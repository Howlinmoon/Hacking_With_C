//
//  main.cpp
//  05_08 - C++ References, similar to pointers
//
//  Created by jim Veneskey on 2/15/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <iostream>
using namespace std;


// dangerous and confusing reference example
int & f(int & i) {
    return ++i;
}

// less dangerous using constants
const int & g(const int & i) {
    return i;
}

int main( int argc, char ** argv ) {
    int i = 5;
    //int & ir = i;
    //ir = 10;
    
    // this passes a reference of 'i' to the function 'f'
    f(i);
    
    printf("i is %d\n", i);
    
    g(i);

    printf("i is %d\n", i);
    
    return 0;
}