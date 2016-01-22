//
//  main.c
//  07_04 - Recursion examples
//
//  Created by jim Veneskey on 1/22/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>

//Function prototypes
void numberSeries(int k);
void recursiveHalf(int k, double val);
void numberSeriesStops(int k);
void recursiveHalfStops(int k, double val);

int main(void) {
    //numberSeries(1);
    //recursiveHalf(1, 1000.0);
    
    numberSeriesStops(1);
    //recursiveHalfStops(1, 1000.0);
    
    return EXIT_SUCCESS;
}

//Recursive functions that run until all memory is exhausted
//---- DO NOT DO THIS !! ----
void numberSeries(int k) {
    printf("k: %d\n",k);
    numberSeries(k+1);
}

//---- DO NOT DO THIS !! ----
void recursiveHalf(int k, double val) {
    printf("Step:%d  val=%lf\n",k,val);
    recursiveHalf(k+1, val/2.0);
}


//Recursive functions with a safety stop
void numberSeriesStops(int k) {
    printf("k: %d\n",k);
    if ( k < 20) {
            numberSeriesStops(k+1);
    }
}

void recursiveHalfStops(int k, double val) {
    printf("Step:%d  val=%lf\n",k,val);
    if ( k < 20)
        {
            recursiveHalfStops(k+1, val/2.0);

        }
}