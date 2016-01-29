//
//  main.c
//  12_03
//
//  Created by jim Veneskey on 1/29/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Constants
#define MAX_NAME_LENGTH  10
#define MAX_COLOR        10
#define MAX_TEAMS        10
#define MAX_NAMES        14
#define MAX_COLORS        4
#define MAX_AGE         120

// global definitions
struct person {
    char firstName[MAX_NAME_LENGTH];
    char lastName[MAX_NAME_LENGTH];
    int age;
    char eyeColor[MAX_COLOR];
    float height;
};

// Global variables

// A "bank" of data to be used to populate arrays
char bankOfFirstNames[MAX_NAMES][MAX_NAME_LENGTH] = {"Alex","Angela","Sonya","Eric","Robert","Svetlana","Carl","Sujit","Niejls","Janet","Isac","Emily","Terik","Jimn"};
char bankOfLastNames[MAX_NAMES][MAX_NAME_LENGTH] = {"Borisov", "Johnson","Ben-Haim","Kourakis","Elfasi","Newton","Gorbachev","Marinescu","Voltaire","Albertson","Lee","Chin","Kraft","Veneskey"};
char bankOfEyeColors[MAX_COLORS][MAX_COLOR] = {"Blue","Black","Green","Brown"};

struct person teams[MAX_TEAMS];  //array of 10 persons

//Function prototypes
void printStructure(void);
void populateArrayOfStructs(void);



int main(int argc, const char * argv[]) {
    // insert code here...

    // populate the array
    populateArrayOfStructs();
    // print them out
    printStructure();
    
    
    return EXIT_SUCCESS;
}



// function definitions

void populateArrayOfStructs(void) {
    
    // random seed generator
    srand(time(NULL));
    
    // populate the team array with random values from the bank of data
    for (int i = 0; i < MAX_TEAMS; i++) {
        int randomFirst = rand() % MAX_NAMES;
        int randomLast = rand() % MAX_NAMES;
        int randomColor = rand() % MAX_COLORS;
        // assign the strings randomly
        strcpy(teams[i].firstName, bankOfFirstNames[randomFirst]);
        strcpy(teams[i].lastName, bankOfLastNames[randomLast]);
        strcpy(teams[i].eyeColor, bankOfEyeColors[randomColor]);
        // randomly assign an age and height
        teams[i].age = rand() % MAX_AGE;
        teams[i].height = 4.0 + rand() % 3 + (rand() % 10)/10.0;
    }
}

void printStructure(void) {
    // print out the global array of structures
    for (int i = 0; i < MAX_TEAMS; i++) {
        printf("First Name:[%8s] ", teams[i].firstName);
        printf("Last Name:[%9s] ", teams[i].lastName);
        printf("Age: [%3d] ", teams[i].age);
        printf("Height: [%4.1f] ", teams[i].height);
        printf("Eye Color:[%5s]\n", teams[i].eyeColor);
    }
}
