//
//  main.c
//  04_04 - conditional compilation
//
//  Created by jim Veneskey on 2/12/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

// note, defining FOO here alters the value of 'NUMBER' in conditional.h
//#define FOO "BAR"

#include "conditional.h"


int main( int argc, char ** argv ) {
    printf("Number is %d\n", NUMBER);
    return 0;
}
