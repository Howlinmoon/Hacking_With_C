//
//  main.c
//  10_08_Challenge
//
//  Created by jim Veneskey on 1/28/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes

void printBar(int howLong);
void graphData(int dataSet[], int howMany);
// int generateData(void);

int main(int argc, const char * argv[]) {
    // insert code here...
    // generate random data to be displayed
    
    // seed the random number generator
    srand(time(NULL));
    
    // generate 50 values between 1 and 50
    
    int randomData[50];
    for (int i = 0; i < 50; i++) {
        randomData[i] = (rand() % 50) + 1;
    }
    
    // send the data to be graphed
    
    printf("Preparing to graph a bunch of data\n");
    graphData(randomData, 50);
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

void graphData(int dataSet[], int howMany) {
    printf("Printing a total of %d bar graphs\n", howMany);
    // read the lengths from the array we were passed
    for (int currentBar = 0; currentBar < howMany; currentBar++) {
        printBar(dataSet[currentBar]);
    }
}