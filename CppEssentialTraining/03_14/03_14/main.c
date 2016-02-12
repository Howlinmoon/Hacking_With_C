//
//  main.c
//  03_14
//
//  Created by jim Veneskey on 2/12/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>

// the infamous 'goto' statement - very rare!

int main( int argc, char ** argv ) {
    printf("Before the goto.\n");
    goto target;
    // following printf is NEVER printed
    printf("After the goto.\n");
    target:
    printf("After the target.\n");
    
    for (int i = 0; i < 10; i++) {
        
        if (i == 2) {
            // don't print 2
            continue;
        }
        if (i == 5) {
            // that's far enough
            break;
        }
        printf("i is now %d\n", i);
    }
    
    
    
    return 0;
}
