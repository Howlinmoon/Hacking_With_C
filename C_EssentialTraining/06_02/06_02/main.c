//
//  main.c
//  06_02
//
//  Created by jim Veneskey on 1/19/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {

    // Relational (logical) operators
    
    puts("Logical Operators - results are always 1 or 0, i.e. True or False");
    puts("Recall that 1 is True, and 0 is False");
    
    int x = 3;
    int y = 12;
    
    printf("If x==3 and y==12 then (x == y) is %d\n", (x==y));
    printf("If x==3 and y==12 then (x != y) is %d\n", (x!=y));
    printf("If x==3 and y==12 then (x > y) is %d\n", (x>y));
    printf("If x==3 and y==12 then (x < y) is %d\n", (x<y));
    printf("If x==3 and y==12 then (x >= y) is %d\n", (x>=y));
    printf("If x==3 and y==12 then (x <= y) is %d\n", (x<=y));
    
    puts(" ------------------------------------------ ");
    // logical operations
    x = 1;
    y = 0;
    printf("If x==1 and y==0 then (x && y) is %d\n", (x && y));
    printf("If x==1 and y==0 then (x || y) is %d\n", (x || y));
    printf("If x==1 and y==0 then (!x) is %d\n", (!x ));
    
    
    return 0;
}
