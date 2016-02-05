//
//  main.c
//  17_03_Challenge2
//
//  Created by jim Veneskey on 2/5/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int getDirection(void);
void calculateBearing(int);

int main(int argc, const char * argv[]) {
    // insert code here...

    int userDirection = getDirection();
    calculateBearing(userDirection);
    
    
    
    return EXIT_SUCCESS;
}

int getDirection() {
    int direction = -1;
    while (direction < 0 || direction > 359) {
        printf("Please enter a direction in degrees from 0 to 359\n");
        scanf("%d", &direction);
    }
    
    printf("You entered: %d\n", direction);
    return direction;
}

void calculateBearing(int direction) {
    int diff = 0;
    if (direction < 90 ) {
        printf("You're headed N %d degrees E\n", direction);
    
    } else if (direction > 270) {
        diff = 360 - direction;
        printf("You're headed N %d degrees W\n", diff);
    
    } else if (direction >= 90 && direction < 180) {
        diff = 180 - direction;
        printf("You're headed S %d degrees E\n", diff);
    
    } else {
        diff = direction - 180;
        printf("You're headed S %d degrees W\n", diff);
    }
}
