//
//  main.cpp
//  02_08_2
//
//  Created by jim Veneskey on 2/8/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string inputString;
    
    cout << "Type in a string please: ";
    // 'cin' separates input on word boundaries
    // cin >> inputString;
    
    // this method will allow normal input of an entire line
    getline(cin, inputString);
    
    cout << "You typed in: " << inputString << endl;
    return 0;
}
