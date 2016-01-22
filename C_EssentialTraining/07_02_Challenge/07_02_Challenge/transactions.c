/*
 * transactions.c
 *
 *  Created on: May 7, 2014
 *      Author: isacartzi
 */
#include <stdio.h>
#include <stdlib.h>

float accountBalance, amount;
void initializeAccount(void){
	accountBalance = 0.0;
}

void addGift(float giftAmount){
	accountBalance += giftAmount;
	printf("Congratulations! A gift of $%.2f has been added to your account\n",giftAmount);
}
void askCustomer(void){
	printf("Next transaction please...\n");
	printf("Enter amount to credit (positive) or debit (negative):");
	scanf("%f",&amount);
}

void getBalance(void){
	printf("\nThe current balance in the account is $%.2f\n", accountBalance);
}

void updateAccount(float amount){
	accountBalance += amount;
	printf("The account was updated with $%.2f\n",amount);
}

void thankYou(void){
	printf("------  Thank you!  ------");
}
