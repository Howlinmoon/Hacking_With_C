//
//  main.cpp
//  05_10 - introducing bit fields, specifying how large a variable is at the bit level
//
//  Created by jim Veneskey on 2/16/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <iostream>
using namespace std;

// the number after the colon is how long the field is in bits.
struct preferences {
    bool likesMusic : 1;
    bool hasHair : 1;
    bool hasInternet : 1;
    bool hasDinosaur : 1;
    unsigned int numberOfChildren: 4;
};

int main ( int argc, char ** argv ) {
    struct preferences homer;
    homer.likesMusic = true;
    homer.hasHair = false;
    homer.hasInternet = true;
    homer.hasDinosaur = false;
    homer.numberOfChildren = 3;
    
    if (homer.likesMusic) {
      printf("homer likes music\n");
    }
    
    if (homer.hasHair) {
       printf("homer has hair\n");
    }
    
    if (homer.hasInternet) {
       printf("homer has net\n");
    }
    
    if (homer.hasDinosaur) {
        printf("homer has a dino\n");
    }
    
    printf("homer has %d children\n", homer.numberOfChildren);
    return 0;
}

