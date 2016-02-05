//
//  main.c
//  ToAPower
//
//  Created by jim Veneskey on 2/5/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    double x = 15;
    double y = 3;
    
    double answer = pow(x, y);
    
    printf("15^3 = %f\n", answer);
    
    
    return 0;
}
