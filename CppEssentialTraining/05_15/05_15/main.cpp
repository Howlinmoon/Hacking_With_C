//
//  main.cpp
//  05_15
//
//  Created by jim Veneskey on 2/16/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;

// define a simple function
string func() {
    return "this is a string";
}

int main( int argc, char ** argv ) {
    // using the auto type
    auto x = func();
    // display it
    cout << x << endl;
    
    cout << typeid(x).name() << endl;
    
    cout << "working.cpp" << endl;
    
    
    vector<int> i = {1, 2, 3, 4, 5 };
    for (vector<int>::iterator it = i.begin(); it != i.end(); ++it) {
        cout << *it << endl;
    }
    
    cout << "Now using auto..." << endl;
    
    // a simpler way to re-write the above using 'auto'
    for (auto it = i.begin(); it != i.end(); ++it) {
        cout << *it << endl;
    }
    
    return 0;
}
