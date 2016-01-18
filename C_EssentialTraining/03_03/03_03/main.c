//
//  main.c
//  03_03
//
//  Created by Jim Veneskey on 1/17/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    puts("Floating point type usage in C:");
    // Floating point types
    float       floatNumber;
    double      doubleNumber;
    long double longDoubleNumber;
    
    floatNumber = 2.0 / 3.0;
    doubleNumber = 2.0 / 3.0;
    longDoubleNumber = 2.0 / 3.0;
    
    // size of floating point types
    
    printf("Storage size for unsigned float: %lu bytes\n", sizeof(float));
    printf("Storage size for double float: %lu bytes\n", sizeof(double));
    printf("Storage size for long double: %lu bytes\n", sizeof(long double));
    
    puts("\nCompare precision at 4 decimal places:");
    printf("floatNumber      = %1.4f\n", floatNumber);
    printf("doubleNumber     = %1.4f\n", doubleNumber);
    printf("longDoubleNumber = %1.4Lf\n", longDoubleNumber);

    puts("\nCompare precision at 10 decimal places:");
    printf("floatNumber      = %1.10f\n", floatNumber);
    printf("doubleNumber     = %1.10f\n", doubleNumber);
    printf("longDoubleNumber = %1.10Lf\n", longDoubleNumber);

    puts("\nCompare precision at 30 decimal places:");
    printf("floatNumber      = %1.30f\n", floatNumber);
    printf("doubleNumber     = %1.30f\n", doubleNumber);
    printf("longDoubleNumber = %1.30Lf\n", longDoubleNumber);

    return 0;
}
