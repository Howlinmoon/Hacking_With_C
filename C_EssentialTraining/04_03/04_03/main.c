//
//  main.c
//  04_03
//
//  Created by jim Veneskey on 1/18/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    // define 2 strings
    char string1[20];
    char string2[20];
    
    // some variables for the lengths of the strings
    int len1, len2;
    
    // Scenario 1
    puts("--- SCENARIO 1 ---");
    strcpy(string1, "Anybody");
    strcpy(string2, "Anybody home");
    
    len1 = strlen(string1);
    printf("Length of string1: %d\n", len1);
    len2 = strlen(string2);
    printf("Length of string2: %d\n", len2);
    
    printf("Return Value is: %d\n", strcmp(string1, string2));
    
    puts("--- SCENARIO 2 ---");
    strcpy(string1, "your house");
    strcpy(string2, "my house");
    
    len1 = strlen(string1);
    printf("Length of string1: %d\n", len1);
    len2 = strlen(string2);
    printf("Length of string2: %d\n", len2);

    printf("Return Value is: %d\n", strcmp(string1, string2));

    puts("--- SCENARIO 3 ---");
    strcpy(string1, "our house");
    strcpy(string2, "our house");

    len1 = strlen(string1);
    printf("Length of string1: %d\n", len1);
    len2 = strlen(string2);
    printf("Length of string2: %d\n", len2);
    
    printf("Return Value is: %d\n", strcmp(string1, string2));
    
    return 0;
}
