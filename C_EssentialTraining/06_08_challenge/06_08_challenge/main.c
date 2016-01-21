//
//  main.c
//  06_08_challenge
//
//  Created by jim Veneskey on 1/21/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


// Receives as an input, a height in centimeters
// Calculates and displays the equivalent height in
// Feet and inches


int main(int argc, const char * argv[]) {
    // insert code here...
    float centimeters = 0.0;
    float inches = 0.0;
    float feet = 0.0;
    printf("Please Enter a height in Centimeters\n");
    scanf("%f", &centimeters);
    printf("You entered a starting height of %f centimeters\n", centimeters);
    inches = centimeters / 2.54;
    printf("%f centimeters is equal to %f inches\n", centimeters, inches);
    feet = inches / 12.0;
    printf("%f centimeters is equal to %f feet\n", centimeters, feet);
    return 0;
}
