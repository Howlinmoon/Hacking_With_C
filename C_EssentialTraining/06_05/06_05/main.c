//
//  main.c
//  06_05 - complex statements
//
//  Created by jim Veneskey on 1/20/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    puts("Assignment operators in complex statements");
    
    int a = 5;
    int b = -3;
    int c = 12;
    
    float r = 1.52;
    float s = 2.08;
    float t = 5.32;
    
    int integerResult;
    float floatResult;
    
    integerResult = a * r;
    puts(" ------------- PART 1 -----------------");
    printf("integerResult = %d\n", integerResult);
    
    floatResult = a * r;
    printf("floatResult = %f\n", floatResult);
    
    integerResult = (a > b) * c; // Note, a > b IS true
    printf("integerResult = %d\n", integerResult);

    integerResult = (a < b) * c; // Note, a < b IS false
    printf("integerResult = %d\n", integerResult);

    puts(" ------------- PART 2 -----------------");
    printf("a before: %d\n", a);
    integerResult = (++a) * b; // a is incremented first, then used
    printf("integerResult = %d\n", integerResult);
    printf("a after: %d\n", a);
    
    puts(" ------------- PART 3 -----------------");
    a = 5;
    printf("a before: %d\n", a);
    integerResult = (a++) * b; // a is used first, then incremented
    printf("integerResult = %d\n", integerResult);
    printf("a after: %d\n", a);
    
    puts(" ------------- PART 3 -----------------");
    int initialValue = 0;
    int increment = 5;
    int counter = 1;
    
    int result = initialValue + increment * counter++; // counter is used first, then incremented
    printf("result first time: %d, counter: %d\n", result, counter);
    
    result = initialValue + increment * counter++; // counter is used first, then incremented
    printf("result second time: %d, counter: %d\n", result, counter);

    result = initialValue + increment * (++counter); // counter is incrementedfirst, then used
    printf("result third time: %d, counter: %d\n", result, counter);
    
    
    return 0;
}
