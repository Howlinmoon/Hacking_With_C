//
//  main.cpp
//  05_12 - unions
//
//  Created by jim Veneskey on 2/16/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <iostream>
#include <stdint.h>
using namespace std;

union ipv4 {
    struct {
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
    } bytes;
    uint32_t int32;
};

int main( int argc, char ** argv ) {
    union ipv4 addr;
    addr.bytes = { 192, 168, 0, 96 };
    printf("%d.%d.%d.%d - (%08x)\n",
           addr.bytes.a, addr.bytes.b, addr.bytes.c, addr.bytes.d,
           addr.int32);
    return 0;
}

