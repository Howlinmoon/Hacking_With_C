//
//  main.c
//  07_02 - More functions
//
//  Created by jim Veneskey on 1/21/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Global variables
float accountBalance, amount;

// Function Prototypes
void initializeAccount();
void getBalance(void);
void askCustomer(void);
void updateAccount(float value);
void addGift(float giftAmount);
void thankYou(void);

int main(int argc, const char * argv[]) {
    // insert code here...

    int transactionCounter = 0;
    initializeAccount();
    getBalance();
    
    // Perform first transaction
    askCustomer();
    updateAccount(amount);
    getBalance();
    
    // Perform second transaction
    askCustomer();
    updateAccount(amount);
    addGift(5.0);
    getBalance();
    
    // Perform third transaction
    askCustomer();
    updateAccount(amount);
    addGift(2.0);
    getBalance();
    thankYou();
    
    return 0;
}


void initializeAccount(void) {
    accountBalance = 0.0;
}

void addGift(float giftAmount) {
    accountBalance += giftAmount;
    printf("Congratulations! A gift of $%.2f has been added to your account\n", giftAmount);
}

void askCustomer(void) {
    printf("Next transaction please...\n");
    printf("Enter an amount to credit (positive) or debit (negative): ");
    scanf("%f", &amount);
}

void getBalance(void) {
    printf("\nThe current account balance is: $%.2f\n", accountBalance);
}

void updateAccount(float amount) {
    accountBalance += amount;
    printf("The account has been updated with $%.2f\n", amount);
}

void thankYou(void) {
    printf("---------- Thank You! --------------\n");
}

