//
//  main.c
//  03_02
//
//  Created by jim Veneskey on 1/15/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    puts("Memory size of each type\n");
    puts("-------------------------\n");
    // Sizes of integer types
    printf("Storage size for char:              %lu bytes\n", sizeof(char));
    printf("Storage size for unsigned char:     %lu bytes\n", sizeof(unsigned char));
    printf("Storage size for signed char:       %lu bytes\n", sizeof(signed char));
    printf("Storage size for int:               %lu bytes\n", sizeof(int));
    printf("Storage size for unsigned int:      %lu bytes\n", sizeof(unsigned int));
    printf("Storage size for short:             %lu bytes\n", sizeof(short));
    printf("Storage size for unsigned short:    %lu bytes\n", sizeof(unsigned short));
    printf("Storage size for long:              %lu bytes\n", sizeof(long));
    printf("Storage size for unsigned long:     %lu bytes\n", sizeof(unsigned long));
    
    // size of type void
    printf("Storage size for void:              %lu bytes\n", sizeof(void));
    
    
    return 0;
}
