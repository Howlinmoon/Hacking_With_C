//
//  main.cpp
//  05_09
//
//  Created by jim Veneskey on 2/15/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <cstdio>
using namespace std;

struct employee {
    int id;
    const char *name;
    const char *role;
};

// more advanced usage
// nickname the struc to 'emp_t'
typedef struct employee2 {
    int id;
    const char *name;
    const char *role;
} emp_t;

int main( int argc, char ** argv ) {
    
    // C requires this syntax
    struct employee joe = { 42, "Joe", "Boss" };
    
    
    // C++ allows this
    employee bart = { 8, "Bart", "Bandit" };
    
    
    printf("%s is the %s and has id %d\n",
           joe.name, joe.role, joe.id);

    printf("%s is the %s and has id %d\n",
           bart.name, bart.role, bart.id);

    // using pointers with structs
    struct employee *ep = &joe;
    
    // '->'  dereferences a pointer and accesses the field, all at once
    printf("using pointer notation: %s is the %s and has id %d\n",
           ep->name, ep->role, ep->id);

    // using the typedef notation
    emp_t han = { 22, "Han Solo", "Rogue" };
    
    emp_t *rogue = &han;
    printf("using pointer notation: %s is the %s and has id %d\n",
           rogue->name, rogue->role, rogue->id);
    
    
    
    return 0;
}

