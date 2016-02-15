//
//  main.cpp
//  05_05
//
//  Created by jim Veneskey on 2/15/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
    // note, we declare a String in C++ similarly to how we would declare an INT etc
    string cppstring = "This is a C++ string.";
    cout << "The erroneous size of the C++ string is: " << sizeof(cppstring) << endl;
    cout << cppstring << endl;
    
    for ( unsigned int i = 0; i < cppstring.size(); i++) {
        printf("%02d: %c\n", i, cppstring[i]);
    }
    
    // another way to iterate through a C++ string
    for ( char c : cppstring ) {
        printf("%c\n", c);
    }
    
    // and yet another way - using an auto iterator
    for (auto it = cppstring.begin(); it != cppstring.end(); it++ ) {
        printf("%c\n", *it);
    }
    
    return 0;
}

