//
//  main.c
//  08_03 - advanced if-else usage
//
//  Created by jim Veneskey on 1/25/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// function prototypes
void checkTrafficLight(void);
void processColor(char c);


int main(int argc, const char * argv[]) {
    // insert code here...

    checkTrafficLight();
    return EXIT_SUCCESS;

}

void checkTrafficLight(void) {
    // get the current color of the traffic light
    printf("What is the traffic light's current color? (r=red, y=yellow, g=green)\n");
    char color;
    scanf("%c", &color);
    processColor(color);
}

void processColor(char c) {
    if (c == 'r') {
        printf("The traffic light is RED - STOP!\n");
    } else
        if (c == 'y') {
                   printf("The traffic light is YELLOW - proceed with CAUTION\n");
               }
               else if ( c == 'g') {
                   printf("The traffic light is GREEN - let's Boogie!\n");
               } else {
                   printf("You entered an illegal color - please try again.\n");
                
               }
}