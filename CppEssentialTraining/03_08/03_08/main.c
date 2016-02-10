//
//  main.c
//  03_08
//
//  Created by jim Veneskey on 2/10/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    // Declaring a null terminated C string the hard way
    char s[] = { 's', 't', 'r', 'i', 'n', 'g', 0 };
    // normal method
    // char s[] = "string";
    printf("string is: %s\n", s);
    return 0;
}
