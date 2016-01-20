//
//  main.c
//  06_03
//
//  Created by jim Veneskey on 1/20/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    // declare variables used in the decision process
    int weather;
    int readiness;
    int supermarket;
    int coolcar;
    int supercar;
    int mood;
    int decision;
    
    // Gather user input
    printf("Weather outlook? (1 = Good, 0 = Bad) ");
    scanf("%d", &weather);
    printf("Picnic readiness? (1 = Good, 0 = Bad) ");
    scanf("%d", &readiness);
    printf("Is there a supermaket nearby just in case? (1 = Yes, 0 = No) ");
    scanf("%d", &supermarket);
    printf("Cool Car condition? (1 = Good, 0 = Bad) ");
    scanf("%d", &coolcar);
    printf("Super Car condition?  Just in case(!) (1 = Good, 0 = Bad ");
    scanf("%d", &supercar);
    printf("Do you even feel like doing this? (1 = Yes, 0 = Stay Home) ");
    scanf("%d", &mood);
    
    // crunch the numbers
    decision = (weather && (readiness || supermarket) && (coolcar || supercar) && mood);
    printf("Under the described conditions, the decision is: %d\n", decision);
    
    
    return 0;
}
