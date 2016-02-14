//
//  main.cpp
//  05_04 - C Strings
//
//  Created by Jim Veneskey on 2/13/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
    char cstring[] = "String";
    
    cout << cstring << endl;
    cout << "The length of the array: " << sizeof(cstring) << endl;
    for( unsigned int i = 0; cstring[i]; i++) {
        printf("%02d: %c\n", i, cstring[i]);
    }
    return 0;
}

