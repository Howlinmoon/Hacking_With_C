//
//  main.c
//  07_03 - functions that return something
//
//  Created by jim Veneskey on 1/22/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//Function prototypes
int calculateTotalPointsMade(int q1,int q2,int q3,int q4);
float calculateAveragePoints(int q1,int q2,int q3,int q4);
float twoPointsPerformance(int totalShots, int shotsMade);
float threePointsPerformance(int totalShots, int shotsMade);
void displayStatistics(int totPts,int tot2Pts,int tot3Pts,float avgQtr,float twoPts,float threePts);

// Notice - no globals!

int main(void) {
    //Variables declarations
    int twoPointQ1;    //The number of two-point shots made in Q1
    int threePointQ1;  //The number of three-point shots made in Q1
    int totalShotsQ1;  //The total number of shots in Q1
    int twoPointQ2;    //The number of two-point shots made in Q2
    int threePointQ2;  //The number of three-point shots made in Q2
    int totalShotsQ2;  //The total number of shots in Q2
    int twoPointQ3;    //The number of two-point shots made in Q3
    int threePointQ3;  //The number of three-point shots made in Q3
    int totalShotsQ3;  //The total number of shots in Q3
    int twoPointQ4;    //The number of two-point shots made in Q4
    int threePointQ4;  //The number of three-point shots made in Q4
    int totalShotsQ4;  //The total number of shots in Q4
    
    printf("Enter the number of shots in the 1st quarter:");
    scanf("%d",&totalShotsQ1);
    printf("Enter the number of 2-point shots MADE in the 1st quarter:");
    scanf("%d",&twoPointQ1);
    printf("Enter the number of 3-point shots MADE in the 1st quarter:");
    scanf("%d",&threePointQ1);
    
    printf("Enter the number of shots in the 2nd quarter:");
    scanf("%d",&totalShotsQ2);
    printf("Enter the number of 2-point shots MADE in the 2nd quarter:");
    scanf("%d",&twoPointQ2);
    printf("Enter the number of 3-point shots MADE in the 2nd quarter:");
    scanf("%d",&threePointQ2);
    
    printf("Enter the number of shots in the 3rd quarter:");
    scanf("%d",&totalShotsQ3);;
    printf("Enter the number of 2-point shots MADE in the 3rd quarter:");
    scanf("%d",&twoPointQ3);
    printf("Enter the number of 3-point shots MADE in the 3rd quarter:");
    scanf("%d",&threePointQ3);
    
    printf("Enter the number of shots in the 4th quarter:");
    scanf("%d",&totalShotsQ4);;
    printf("Enter the number of 2-point shots MADE in the 4th quarter:");
    scanf("%d",&twoPointQ4);
    printf("Enter the number of 3-point shots MADE in the 4th quarter:");
    scanf("%d",&threePointQ4);
    
    /*------------------- CALCULATE STATISTICS ----------------------------*/
    int totalPoints = calculateTotalPointsMade(totalShotsQ1,totalShotsQ2,totalShotsQ3,totalShotsQ4);
    int total2Points = calculateTotalPointsMade(twoPointQ1,twoPointQ2,twoPointQ3,twoPointQ4);
    int total3Points = calculateTotalPointsMade(threePointQ1,threePointQ2,threePointQ3,threePointQ4);
    
    float averagePerQuarter = calculateAveragePoints(totalShotsQ1,totalShotsQ2,totalShotsQ3,totalShotsQ4);
    float twoPoints = twoPointsPerformance(totalPoints, total2Points);
    float threePoints = threePointsPerformance(totalPoints, total3Points);
    
    displayStatistics(totalPoints,total2Points,total3Points,averagePerQuarter,twoPoints,threePoints);
    
    return EXIT_SUCCESS;
}

/*----------------------- FUNCTION DEFINITIONS -----------------------------*/

int calculateTotalPointsMade(int q1,int q2,int q3,int q4){
    double sum = q1+q2+q3+q4;
    // creating a double return value - yet we declare the function returns an int
    // this forces the compiler to cast 'sum' as an int prior to returning it
    return sum;
}

float calculateAveragePoints(int q1,int q2,int q3,int q4){
    float average = (q1+q2+q3+q4)/4.0;
    return average;
}

float twoPointsPerformance(int totalShots, int shotsMade){
    float performance = ((float)shotsMade/(float)totalShots)*100.0;
    return performance;
}

float threePointsPerformance(int totalShots, int shotsMade){
    float performance = ((float)shotsMade/(float)totalShots)*100.0;
    return performance;
}

void displayStatistics(int totPts,int tot2Pts,int tot3Pts,float avgQtr,float twoPts,float threePts){
    printf("----- These are the statistics -----\n");
    printf("Total attempts made:          %d\n", totPts);
    printf("Total 2-points shots made:   %d\n", tot2Pts);
    printf("Total 3-points shots made:   %d\n", tot3Pts);
    printf("Success for 2-points shots:  %.1f\n", twoPts);
    printf("Success for 3-points shots:  %.1f\n", threePts);
    printf("Average points per quarter:  %.1f\n", avgQtr);
}
