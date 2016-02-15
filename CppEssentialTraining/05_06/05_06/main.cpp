//
//  main.cpp
//  05_06 - using sequences
//
//  Created by jim Veneskey on 2/15/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
    char string[] = "This is\n \u03bc \t ' \" \\ \x40 a string.";
    
    cout << string << endl;
    return 0;
}
