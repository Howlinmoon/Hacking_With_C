//
//  main.c
//  02_08_1  Working with STDIN
//
//  Created by jim Veneskey on 2/8/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

enum { max_string = 127 };

static char string[max_string + 1] = "";


int main( int argc, char ** argv ) {
    printf("Type a string please: ");
    /* a new method of input, treating stdin like a file...  */
    fgets(string, max_string, stdin);
    printf("The string is %s \n", string);
    return 0;
}
