//
//  main.c
//  02_04
//
//  Created by jim Veneskey on 1/15/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char * argv[]) {
    
    int days = 12 + 5 + 4;
    double width = 89.67;
    double height = 10.8;
    double perimeter = width + width + height + height;
    
    printf("days: %d\n", days);
    printf("perimeter: %f\n", perimeter);
    return 0;
}
