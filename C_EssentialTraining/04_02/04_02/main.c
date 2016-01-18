//
//  main.c
//  04_02
//
//  Created by jim Veneskey on 1/18/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char * argv[]) {
    // insert code here...
    
    // define a couple strings
    char name[20], address[30];
    
    // a very short string
    
    char c;
    
    
    // get some input from the user
    
    printf("How do you feel on a scal of 1-5? ");
    c = getchar();
    
    printf("Please enter your name: ");
    scanf("%s", &name);
    
    printf("Please enter your address: ");
    scanf("%s", &address);
    
    printf("Entered Name: %s\n", name);
    printf("Entered address:%s\n", address);
    
    printf("You said you feel: ");
    putchar(c);

    
    
    return 0;
}
