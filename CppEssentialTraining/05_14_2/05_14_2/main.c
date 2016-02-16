//
//  main.c
//  05_14_2
//  void pointers, aka polymorphic pointers...
//  Created by jim Veneskey on 2/16/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

void * func( void * );

int main( int argc, char ** argv ) {
    printf("this is void-pointer.c\n");
    
    // the following two lines declare a char pointer
    char * cp = "1234";
    // and then convert the char pointer into an int pointer
    int * vp = func(cp);
    // by calling func with it...
    printf("%08x\n", * vp);
    
    return 0;
}

void * func ( void * vp ) {
    return vp;
}