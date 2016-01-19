//
//  main.c
//  05_03
//
//  Created by jim Veneskey on 1/19/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    // Example of using the calculating capability of C
    
    // variable declarations and initialization
    double originalPrice =  0.0;
    double tax =            0.0;
    double discount =       0.0;
    double specialPrice =   0.0;
    
    printf("Enter the original price: ");
    scanf("%lf", &originalPrice);
    
    printf("Enter the sales tax percentage: ");
    scanf("%lf", &tax);
    
    printf("Enter discount percentage: ");
    scanf("%lf", &discount);
    
    // calculate the final price
    double afterTax = originalPrice * (1.0 + tax/100.0);
    double theDiscount = originalPrice * (discount/100.0);
    specialPrice = afterTax - theDiscount;
    
    printf("\nOur Rules:\n 1. Tax is applied first\n 2. Discount is applied to the original price\n");
    
    printf("The original price is: $%.2lf\n", originalPrice);
    printf("The price with tax applied is: $%.2lf\n", afterTax);
    printf("The discount amount is: $%.2lf\n", theDiscount);
    printf("Your special price is: $%.2lf\n", specialPrice);
    
    return 0;
}
