//
//  main.cpp
//  05_14 - The Void type
//  used only in function declarations
//
//  Created by jim Veneskey on 2/16/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//


#include <iostream>
using namespace std;

void func( void );

int main( int argc, char ** argv ) {
    cout << "void-type.c" << endl;
    func();
    return 0;
}

void func ( void ) {
    cout << "this is func()" << endl;
}