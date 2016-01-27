//
//  main.c
//  09_06_Challenge
//
//  Created by jim Veneskey on 1/26/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// function prototypes

void printBar(int howLong);
void graphData(int howMany);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Preparing to graph a bunch of data\n");
    graphData(10);
    return EXIT_SUCCESS;
}

// function definitions
void printBar(int howLong) {
    int counter = 0;
    printf("%3d:", howLong);
    while (counter <= howLong) {
        printf("#");
        counter++;
    }
    // end the bar
    printf("\n");
}

void graphData(int howMany) {
    printf("Printing a total of %d bar graphs\n", howMany);
    // make the lengths of the data multiples of 5 for variety
    for (int currentBar = 1; currentBar <= howMany; currentBar++) {
        printBar(currentBar * 5);
    }
}