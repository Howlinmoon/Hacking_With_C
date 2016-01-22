// ATM Functions

// Need to include our std lib stuff in here
// Since we are not including it in main.c
#include <stdio.h>
#include <stdlib.h>

// only define the prototypes if they have not already been done
#ifndef ATMFUNCTIONS
#define ATMFUNCTIONS

// our global vars go here
float accountBalance, amount;

//prototypes declarations
void initializeAccount();
void getBalance(void);
void askCustomer(void);
void updateAccount(float value);
void addGift(float giftAmount);
void thankYou(void);
#endif
