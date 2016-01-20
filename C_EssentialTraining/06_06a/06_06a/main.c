//
//  main.c
//  06_06a - more flexible quadratic equation solver
//
//  Created by jim Veneskey on 1/20/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    puts("-------- Solving a quadratic equation II ------");
    // find the two real roots of a quadratic equation
    // aX^2 + bX + c = 0
    
    float a, b, c;
    
    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);
    
    printf("Enter c: ");
    scanf("%f", &c);
    
    float discriminant = sqrt(b*b - 4*a*c);
    float root1 = (-b + discriminant)/(4*a);
    float root2 = (-b - discriminant)/(4*a);
    
    printf("Root1 = %f\n", root1);
    printf("Root2 = %f\n", root2);
    
    return 0;
}
