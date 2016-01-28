//
//  main.c
//  10_07 - searching and sorting
//
//  Created by jim Veneskey on 1/28/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


#define TRUE 1
#define FALSE 0

// Function Prototypes
void searchHighMPG(float value, float dataSet[], int len);
void printArray(char dataName[], float dataSet[], int dataLength);
void bubbleSort(float dataSet[], int length);


int main(int argc, const char * argv[]) {
    // insert code here...

    // some numbers to be sorted
    float mpgData[10] = { 18.5, 16.2, 32.0, 40.0, 24.5, 31.2, 16.8, 22.1, 12.5, 35.5 };
    
    searchHighMPG(34.0, mpgData, 10);
    
    // bubbleSort(mpgData, 10);
    
    
    return EXIT_SUCCESS;
}

// Function Definitions

void searchHighMPG(float value, float dataSet[], int len) {
    printf("Array received in searchHighMPG\n");
    printArray("mpgData", dataSet, len);
    printf("Cars rated at over %.1f mpg\n\n", value);
    for (int i = 0; i < len; i++ ) {
        if (dataSet[i] > value ) {
            printf("Car %d has MPG: %.1f\n", i, dataSet[i]);
        }
    }
}

void bubbleSort(float dataSet[], int length) {
    printf("Array received by bubbleSort\n");
    printArray("mpgData", dataSet, length);
    int swapped;
    float temp;
    int loopCounter = 0;
    do {
        printf("===> DO-WHILE-LOOP CYCLE -----: %d\n", loopCounter++);
        swapped = FALSE;
        for (int i = 1; i < length; i++) {
            // if the current pair is out of order
            if (dataSet[i-1] > dataSet[i]) {
                // swap them
                // first we store off i-1's value in a temp variable
                temp = dataSet[i-1];
                // swap #1
                dataSet[i-1] = dataSet[i];
                // swap #2
                dataSet[i] = temp;
                swapped = TRUE;
            }
            
            printf("----> FOR-LOOP CYCLE ----: %d\n", i);
            printArray("mpgData", dataSet, length);
        }
        
    } while (swapped);
}

void printArray(char dataName[], float dataSet[], int dataLength) {
    for ( int i = 0; i < dataLength; i++) {
        printf("        %s[%d]: %.1f\n",dataName, i,dataSet[i]);
    }
}