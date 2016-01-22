/*
 * transactions.h
 *
 *  Created on: May 7, 2014
 *      Author: isacartzi
 */
#include <stdio.h>
#include <stdlib.h>
#ifndef TRANSACTIONS_H_
#define TRANSACTIONS_H_
float accountBalance, amount;

void initializeAccount();
void getBalance(void);
void askCustomer(void);
void updateAccount(float value);
void addGift(float giftAmount);
void thankYou(void);

#endif /* TRANSACTIONS_H_ */
