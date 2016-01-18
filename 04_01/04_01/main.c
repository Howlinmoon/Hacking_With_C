//
//  main.c
//  04_01
//
//  Created by jim Veneskey on 1/18/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    // and example of an implicitly defined string
    puts("Hello World, how are you today?");
    
    // here is an explicitly defined string.
    // or do I have this backwards?
    
    char address[30] = "123 Some Street, SomeCity, USA, 12345";
    //                  0123456789 123456789 123456789 123456
    // length of address is actually 37...
    
    // another string of char
    char name[40] = "FirstName MiddleName LastName";
    //                123456789 123456789 12345678
    // 40 char allocated, only 29 used
    
    return 0;
}
