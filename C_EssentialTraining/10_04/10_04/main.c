//
//  main.c
//  10_04 - accessing array elements
//
//  Created by jim Veneskey on 1/27/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


#define NUMBER_OF_CLASSROOMS 20

// function prototypes
void printArray(char dataName[], int dataSet[], int dataLength);

int main(int argc, const char * argv[]) {
    // insert code here...
    int classrooms[NUMBER_OF_CLASSROOMS] = { 15, 18, 10, 23, 15 };
    
    classrooms[3] += 2;
    
    printf("The 5th element is %d \n\n", classrooms[4]);
    
    printArray("classrooms", classrooms, NUMBER_OF_CLASSROOMS);
    
    return EXIT_SUCCESS;
}

// function definitions

void printArray(char dataName[], int dataSet[], int dataLength) {
    // iterate through the elements
    for (int i = 0; i < dataLength; i++) {
        printf("%s[%d]: %d\n", dataName, i, dataSet[i]);
    }
}