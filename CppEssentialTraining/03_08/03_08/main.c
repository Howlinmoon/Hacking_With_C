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
    char s1[] = { 's', 't', 'r', 'i', 'n', 'g', ' ', 'o', 'n', 'e', 0 };
    
    // normal method
    char s2[] = "string two";
    printf("string1 is: %s\n", s1);
    printf("string2 is: %s\n", s2);
    
    // print a string character by character
    for (int i = 0; s2[i] != 0; i++) {
        printf("char[%d] is %c\n", i, s2[i]);
    }
    return 0;
}
