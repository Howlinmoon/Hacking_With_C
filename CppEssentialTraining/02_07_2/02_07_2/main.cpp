//
//  main.cpp
//  02_07_2
//
//  Created by jim Veneskey on 2/8/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <iostream>
//using namespace std;

// 'namespace std' supplies cout, cerr, and endl

// so we can explicitly add it 'std' ourselves...

int main( int argc, char ** argv ) {
    // cout = stdout
    std::cout << "Hello, World! (stdout)\n";
    // vs cerr = stderr
    std::cerr << "Hello, World! (stderr)\n";
    // a different way to specify the line ending
    std::cout << "Hello, World! (stdout - special ending)" << std::endl;
    return 0;
}
