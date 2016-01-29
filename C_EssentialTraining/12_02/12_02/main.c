//
//  main.c
//  12_02 - declaring and accessing structures
//
//  Created by jim Veneskey on 1/29/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Constants
#define MAX_NAME  30
#define MAX_COLOR 15

// globally defined struct
struct person {
    // 5 fields
    char firstName[MAX_NAME];
    char lastName[MAX_NAME];
    int age;
    char eyeColor[MAX_COLOR];
    float height;
};

// function prototypes
void printStructure(struct person individual);

int main(int argc, const char * argv[]) {
    // insert code here...

    // declare the variable citizen as of type person
    struct person citizen;
    
    // create a member
    citizen.age = 52;
    citizen.height = 5.10;
    // copy string data
    strcpy(citizen.lastName, "Veneskey");
    strcpy(citizen.firstName, "Jim");
    strcpy(citizen.eyeColor, "Blue");
    
    // pass the entire structure to the function as a single argument
    
    printStructure(citizen);
    
    return EXIT_SUCCESS;
}


// function definitions

void printStructure(struct person dude) {
    // print out the fields of the structure
    printf("First name: %s\n", dude.firstName);
    printf("Last name: %s\n", dude.lastName);
    printf("Age: %d\n", dude.age);
    printf("Height: %1.f\n", dude.height);
    printf("Eye color: %s\n", dude.eyeColor);
}
