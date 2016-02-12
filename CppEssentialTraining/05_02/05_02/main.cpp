//
//  main.cpp
//  05_02 - Integer Types
//
//  Created by jim Veneskey on 2/12/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
    // char by default, appears to be signed
    char c;
    // so we make this one, unsigned
    unsigned uc;
    short int si;
    int i;
    long int li;
    long long int lli;
    
    cout << "size of char c is " << sizeof(c) << endl;
    cout << "size of short int si is " << sizeof(si) << endl;
    cout << "size of int i is " << sizeof(i) << endl;
    cout << "size of long int li is " << sizeof(li) << endl;
    cout << "size of long long int lli is " << sizeof(lli) << endl;
    
    
    li = 12345;
    printf("li is %ld\n", li);
    printf("c = 127\n");
    c = 127;
    printf("c is %d\n", c);
    c++;
    printf("after increment, c is %d\n", c);

    printf("uc = 127\n");
    uc = 127;
    printf("uc is %d\n", uc);
    uc++;
    printf("after increment, uc is %d\n", uc);

    
    return 0;
}
