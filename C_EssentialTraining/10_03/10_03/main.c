//
//  main.c
//  10_03 - initializing an array after declaring it
//
//  Created by jim Veneskey on 1/27/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// a simple constant
#define MAX_LETTERS 20

int main(int argc, const char * argv[]) {
    // insert code here...
    // explicitly defining the size
    int classrooms[5] = { 15, 18, 10, 23, 15};
    
    // implicitly defining the size
    float heights[] = { 5.5, 6.1, 5.8 };
    
    // explicitly using a constant
    char lastName[MAX_LETTERS] = "Mr. Johnson"; // [sic]
    
    
    
    
    return EXIT_SUCCESS;
}
