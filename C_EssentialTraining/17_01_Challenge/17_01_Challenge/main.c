//
//  main.c
//  17_01_Challenge
//
//  Created by jim Veneskey on 2/4/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// our function prototypes

int getAmountOfLoan(void);
int getNumberOfPayments(void);
int getAnnualRate(void);
double computeDiscount(int rate, int numberPayments);
void generateReport(double payment, int howMany, double amountOfLoan);

int main(int argc, const char * argv[]) {
    // insert code here...
    int principle = getAmountOfLoan();
    int numPayments = getNumberOfPayments();
    int annualRate = getAnnualRate();
    
    /*
    
     Loan Payment = Amount / Discount
     n = number of payments per year
     i = (annual rate / 100) / 12
     
     Discount = ( ((1 + i)^n) - 1) / (i * (1 + i)^n)
     
     Calculate the remaining balance after each months payment
     Calculate how much is paying off the principle and how much is interest
     
     */
    
    
    double i = ( annualRate / 100.0) / 12.0;
    printf("Annual rate (i) = %f\n", i);
    double toAPower = pow(1 + i, numPayments);
    printf("toAPower = %f\n", toAPower);
    double discount = ( toAPower - 1) / (i * toAPower);
    printf("Calculated discount as: %f\n", discount);
    double loanPayment = principle / discount;
    printf("Your monthly loan payment is: %f\n", loanPayment);
    
    generateReport(loanPayment, numPayments, principle);
    
    return EXIT_SUCCESS;
}

void generateReport(double payment, int howMany, double amountOfLoan) {
    printf("--------- Payment Report ----------");
    printf("Monthly Payments: %f\n", payment);
    printf("Amount of Loan: %f\n", amountOfLoan);
    printf("Number of Payments: %d\n", howMany);
    
    /* calculate the payments over the course of the loan */
    
    double totalInterest = 0.0;
    double loanTotal = payment * howMany;
    double loanRemaining = loanTotal;
    
    printf("Amount of Loan with interest: %f\n", loanTotal);
    
    for (int paymentNumber = 1; paymentNumber <= howMany; paymentNumber++) {
        loanRemaining = loanRemaining - payment;
        printf("Payment #%d, Payment: %f, balance remaining: %f\n", paymentNumber, payment, loanRemaining);
    }
    
    /* calculate the total interest payments */
    totalInterest = loanTotal - amountOfLoan;
    printf("You paid a total of %f in interest charges, a pretty damn good deal!\n", totalInterest);
    
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

