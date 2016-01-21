//
//  main.c
//  07_01 - functional programming
//
//  Created by jim Veneskey on 1/21/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


// function prototype definitions

void assessRoomCapacities(void);
void estimateWaitingVisitors(void);
void processData(void);
void generateReport(void);

// Global variables
int room1, room2, room3;
int visitors1, visitors2, visitors3;
int totalAvailableSeats, totalWaitingVisitors;


int main(int argc, const char * argv[]) {
    // insert code here...

    assessRoomCapacities();
    estimateWaitingVisitors();
    processData();
    generateReport();
    
    return 0;
}


// functions defined below

void assessRoomCapacities() {
    // Asks the user to provide the number of empty seats in each room
    printf("Enter the number of empty seats in room 1: ");
    scanf("%d", &room1);
    printf("Enter the number of empty seats in room 2: ");
    scanf("%d", &room2);
    printf("Enter the number of empty seats in room 3: ");
    scanf("%d", &room3);
}

void estimateWaitingVisitors() {
    // Asks the user to provide the number of visitors waiting for each room
    printf("Enter the number of visitors waiting for room 1: ");
    scanf("%d", &visitors1);
    printf("Enter the number of visitors waiting for room 2: ");
    scanf("%d", &visitors2);
    printf("Enter the number of visitors waiting for room 3: ");
    scanf("%d", &visitors3);
}

void processData() {
    totalAvailableSeats = room1 + room2 + room3;
    totalWaitingVisitors = visitors1 + visitors2 + visitors3;
}

void generateReport() {
    printf("Overall, there are still seats available (1 = Yes, 0 = No): %d\n", (totalAvailableSeats > totalWaitingVisitors));
    printf("Room 1 can accept more visitors (1 = Yes, 0 = No): %d\n", (room1 > visitors1));
    printf("Room 2 can accept more visitors (1 = Yes, 0 = No): %d\n", (room2 > visitors2));
    printf("Room 3 can accept more visitors (1 = Yes, 0 = No): %d\n", (room3 > visitors3));
    
    printf("On average, there are %.2f visitors waiting per room\n", (totalWaitingVisitors/3.0));
}

