//
//  main.cpp
//  05_14_3 - void pointers, C++ style
//
//  Created by jim Veneskey on 2/16/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

void * func( void * );

int main( int argc, char ** argv ) {
    printf("this is void-pointer.c\n");
    
    const char * cp = "1234";
    // C++ forces you to explicitly cast void pointers to the correct type
    // C just magically does the conversion for you.
    
    int * vp = (int *) func( (void *) cp );
    printf("%08x\n", * vp);
    
    return 0;
}

void * func ( void * vp ) {
    return vp;
}
