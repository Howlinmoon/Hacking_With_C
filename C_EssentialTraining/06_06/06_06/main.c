//
//  main.c
//  06_06 - mathematical formulas
//
//  Created by jim Veneskey on 1/20/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

int main(int argc, const char * argv[]) {
    // insert code here...

    puts("Mathematical Expressions");
    puts("------------------------");
    
    // find the area of a circle
    
    float radius = 5.0;
    float area;
    
    
    // A = PI * Radius^2
    area = PI * radius * radius;
    printf("A circle with radius: %f has an area of: %f\n", radius, area);
    
    
    puts("-------- Solving a quadratic equation ------");
    // find the two real roots of a quadratic equation
    // aX^2 + bX + c = 0
    
    float a = 2;
    float b = 7;
    float c = 4;
    float discriminant = sqrt(b*b - 4*a*c);
    float root1 = (-b + discriminant)/(4*a);
    float root2 = (-b - discriminant)/(4*a);
    
    printf("Root1 = %f\n", root1);
    printf("Root2 = %f\n", root2);
    
    puts("------------- The volume of a cylinder ----------------");
    // Given radius and height
    // Volume = PI * R^2 * h
    
    float R = 12.375;
    float h = 10.03;
    float Volume = PI * R * R * h;
    printf("The volume of the cylinder is: %f\n", Volume);
    
    
    
    return 0;
}
