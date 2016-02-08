//
//  main.c
//  02_07_1
//
//  Created by jim Veneskey on 2/8/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

int main( int argc, char ** argv ) {
    /* slightly different print - specifying the stream */
    fprintf(stdout, "Hello, World (stdout)!\n");
    /* now - again - specifing stderr */
    fprintf(stderr, "Hello, World (stderr)!\n");
    return 0;
}
