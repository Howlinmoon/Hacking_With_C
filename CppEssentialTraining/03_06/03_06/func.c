//
//  main.c
//  03_06 - Declaring variables and functiond
//
//  Created by Jim Veneskey on 2/6/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//


#include <stdio.h>
//#include "func.h"

// Defined a function prior to using it
void func();

int main( int argc, char ** argv ) {
	printf("Hello, World!\n");
	func();
	return 0;
}

void func() {
    printf("this is in the function\n");
}

