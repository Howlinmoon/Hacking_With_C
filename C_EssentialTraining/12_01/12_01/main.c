//
//  main.c
//  12_01 - simple structures
//
//  Created by jim Veneskey on 1/29/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define MAX_TITLE_LENGTH     40
#define MAX_AUTHOR_LENGTH    30
#define MAX_PUBLISHER_LENGTH 50

int main(int argc, const char * argv[]) {
    // insert code here...

    // defining a structure with 3 fields (strings)
    struct book {
        char title[MAX_TITLE_LENGTH];
        char author[MAX_AUTHOR_LENGTH];
        char publisher[MAX_PUBLISHER_LENGTH];
    };
    
    
    
    return 0;
}
