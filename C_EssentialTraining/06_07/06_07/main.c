//
//  main.c
//  06_07 - statements and expressions
//
//  Created by jim Veneskey on 1/21/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    puts("Statements and Expressions");
    puts("--------------------------");
    
    puts("These are simple statements without any output:");
    int a = 6;
    int b = 3;
    int c = a + b;
    int j = 0;
    ++j;
    
     puts("-----------------------------");
     puts("This is a compound statement:");
     
     double radius = 5.5;
    // M_PI is automatically defined by including math.h
     double circumference = 2.0 * M_PI * radius;
     double area = M_PI * radius * radius;
     printf("THe area of the circle is: %f\n", area);
     printf("The circumference is: %f\n", circumference);
    
    
    
    return EXIT_SUCCESS;
}
