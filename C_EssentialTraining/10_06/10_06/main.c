//
//  main.c
//  10_06, demonstrate the important of watching your indexes...
//
//  Created by jim Veneskey on 1/27/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    // initialize the array
    int list[5] = { 23, 21, 15, 8, 16 };
    int k = 0;
    list[k] += 2;
    k = 5;
    list[k] += 1;  // error - since 5 is now outside of the array...
    
    printf("The 3rd element is %d\n\n", list[2]);
    printf("The 6th element is %d\n\n", list[6]);   // does not exist...
    printf("The 20th element is %d\n\n", list[19]); // does not exist...
    
    return EXIT_SUCCESS;
}
