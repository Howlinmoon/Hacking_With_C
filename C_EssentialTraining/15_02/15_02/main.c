//
//  main.c
//  15_02 - headers redux
//
//  Created by jim Veneskey on 2/4/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// user headers
#include "myLibrary1502.h"
#include "myConstants1502.h"
#include "myMacros1502.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("The volume of a sphere with radius 5 = %lf\n", volumeSphere(5));
    
    int list[] = { NUMBERS };
    printf("The 4th element in the list is %d\n", list[3]);
    
    
    return EXIT_SUCCESS;
}
