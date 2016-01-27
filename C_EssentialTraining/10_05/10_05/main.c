//
//  main.c
//  10_05 - two dimensional arrays
//
//  Created by jim Veneskey on 1/27/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 2
#define NUM_COLS 3

// function prototypes
void printTable(int table[][NUM_COLS]);

int main(int argc, const char * argv[]) {
    // insert code here...
    // initialize the two dimensional array
    int table[NUM_ROWS][NUM_COLS] = {
        { 132, 142,  23 },
        {   0,  76, 872}
    };
    
    // simple test and demonstration of accessing a table element
    printf("Row 1 Column 2 contains %d\n", table[1][2]);
    
    printTable(table);
    
    return EXIT_SUCCESS;
}

// function defintions

// we can allow the first array to default its size, but we need to explicitly
// specify how MANY first arrays there are.
void printTable(int theTable[][NUM_COLS]) {
    printf("\n The Table: \n");
    
    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_COLS; j++) {
            printf("%4d", theTable[i][j]);
        }
        printf("\n");
    }
    
}