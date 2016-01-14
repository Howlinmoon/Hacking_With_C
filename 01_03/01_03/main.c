//
//  main.c
//  01_03
//
//  Created by jim Veneskey on 1/14/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int aNumber;
    
    printf("Please enter a number: ");
    scanf("%d", &aNumber);
    printf("The number you entered: %d\n", aNumber);
    getchar();
    
    return 0;
}
