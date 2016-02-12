// includeB.h by Bill Weinman <http://bw.org/>

// also include A...

#include "includeA.h"

// protect the B struct also

#ifndef _INCLUDE_B
#define _INCLUDE_B
struct structB {
	int member;
};

#endif
