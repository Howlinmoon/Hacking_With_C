//
//  main.c
//  02_02
//
//  Created by jim Veneskey on 1/15/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//
// Breaking code into blocks, ANSI C style

#include <stdio.h>
#include <stdlib.h>

// user lib
#include "specialTasks.h"

// function prototypes
void task_1(void);
void task_2(void);
void task_3(void);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    task_1();
    task_2();
    specialTask_1();
    task_3();
    
    specialTask_2();
    
    return 0;
}

void task_1(void) {
    // calls special task 3
    
    specialTask_3();
    
}

void task_2(void) {
    // calls special tasks 4 & 5
    
    specialTask_4();
    specialTask_5();
    
}

void task_3(void) {
    // get some input from a user
    puts("Enter a number");
    getchar();
}