//
//  main.c
//  08_04 - switch statement
//
//  Created by jim Veneskey on 1/25/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// function prototypes
void processColor(char c);
void checkTrafficLight(void);
void stopDriving(void);
void slowDown(void);
void startDriving(void);
void trafficLightMalfunction(void);


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

// Redone to use 'switch' instead of messy nested 'if's
void processColor(char color) {
    switch (color) {
        case 'r':
            stopDriving();
            break;
        case 'y':
            slowDown();
            break;
        case 'g':
            startDriving();
            break;
        default:
            trafficLightMalfunction();
    }
    
}

void stopDriving(void) {
    printf("The traffic light is RED - STOP!\n");
}

// in America, Yellow means you can continue, but you should expect the light to
// change to red any second - so proceed cautiously - but prepare to stop.

void slowDown(void) {
    printf("The traffic light is YELLOW - proceed with CAUTION\n");
    
}

void startDriving(void) {
    printf("The traffic light is GREEN - let's Boogie!\n");
}

void trafficLightMalfunction(void) {
    printf("You entered an illegal color - please try again.\n");
    
}
