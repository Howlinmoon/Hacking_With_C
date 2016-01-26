//
//  main.c
//  08_05_Challenge
//
//  Created by jim Veneskey on 1/26/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Function prototype
void buySellOrHold(int price);
void finalDecision(char bsoh);

int main(int argc, const char * argv[]) {
    // insert code here...
    int marketPrice;
    printf("Welcome to the Stock Market Decision Maker 1.0\n");
    printf("Please enter the current market price for Widget Inc. ");
    scanf("%d", &marketPrice);
    printf("Stand by while this price is analyzed...\n");
    buySellOrHold(marketPrice);
    return EXIT_SUCCESS;
}

void buySellOrHold(int currentPrice) {

    char decision;
    
    if (currentPrice > 100) {
        decision = 's';
    } else if (currentPrice > 50 && currentPrice <= 100) {
        decision = 'h';
    } else  {
        decision = 'b';
    }
    
    // display the decision to the user
    
    finalDecision(decision);
}

void finalDecision(char decide) {
    switch (decide) {
        case 's':
            printf("it is time to sell the stock...\n");
            break;
        case 'b':
            printf("it is time to buy more stock...\n");
            break;
        case 'h':
            printf("It is time to hold onto your shares for now.\n");
            break;
        default:
            printf("Illegal input\n");
    }
}

