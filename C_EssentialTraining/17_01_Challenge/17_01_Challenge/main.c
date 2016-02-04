//
//  main.c
//  17_01_Challenge
//
//  Created by jim Veneskey on 2/4/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// our function prototypes

int getAmountOfLoan(void);
int getNumberOfPayments(void);
int getAnnualRate(void);
double computeDiscount(int rate, int numberPayments);

int main(int argc, const char * argv[]) {
    // insert code here...
    int principle = getAmountOfLoan();
    int numPayments = getNumberOfPayments();
    int annualRate = getAnnualRate();
    
    /*
    
     Loan Payment = Amount / Discount
     n = number of payments per year
     i = (annual rate / 100) / 12
     
     Discount = (((1 + i)^n) - 1) / (i * (1 + i)^n)
     
     Calculate the remaining balance after each months payment
     Calculate how much is paying off the principle and how much is interest
     
     */
    
    
    return EXIT_SUCCESS;
}

int getAmountOfLoan() {
    printf("Welcome to Jims Loanshark App - How much money do you require? ");
    int amount = 0;
    scanf("%d", &amount);
    printf("Guido, please give this nice person %d dollars\n", amount);
    return amount;
}

int getNumberOfPayments() {
    printf("How many payments a year would you like to make? ");
    int numberOfPayments = 0;
    scanf("%d", &numberOfPayments);
    printf("Guido, make a note, this person is promising to make %d payments\n", numberOfPayments);
    return numberOfPayments;
}

int getAnnualRate() {
    printf("What do you think is a fair percentage rate? ");
    int rate = 0;
    scanf("%d", &rate);
    if (rate < 15) {
        printf("We're not running a charity here - you'll take 20%% and like it!\n");
        rate = 20;
    }
    printf("Guido, take a note - we're making this loan at %d%% interest rate\n", rate);
    return rate;
}

