//
//  main.cpp
//  05_03 - floating point types
//
//  Created by jim Veneskey on 2/12/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
    float f;
    double df;
    long double ldf;
    
    cout << "size of float f is " << sizeof(f) << endl;
    cout << "size of double float df is " << sizeof(df) << endl;
    cout << "size of long double float ldf is " << sizeof(ldf) << endl;
    
    // a test of precision
    f = 0.1;
    f += 0.1 + 0.1;
    // expected is 0.3...
    cout << "We expect f to be 0.3.. and it is: " << f << endl;
    
    if (f == 0.3) {
        cout << "Yes, f is equal to 0.3" << endl;
    } else {
        cout << "Hmmm, f does not appear to be equal to 0.3..." << endl;
    }
    return 0;
}
