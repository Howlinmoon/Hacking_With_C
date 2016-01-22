//
//  main.c
//  07_02_Challenge
//
//  Created by jim Veneskey on 1/22/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "atmstuff.h"
//Global variables
float accountBalance, amount;


int main(void) {
    initializeAccount();
    getBalance();
    //Perform first transaction
    askCustomer();
    updateAccount(amount);
    getBalance();
    //Perform second transaction
    askCustomer();
    updateAccount(amount);
    addGift(5.0);
    getBalance();
    //Perform third transaction
    askCustomer();
    updateAccount(amount);
    addGift(2.0);
    getBalance();
    thankYou();
    return EXIT_SUCCESS;
}

