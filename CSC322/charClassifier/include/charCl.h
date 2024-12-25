#include <stdio.h>
#include <stdlib.h>

#ifndef CHARCL_H_
#define CHARCL_H_

typedef struct
{
	size_t space;
	size_t alnum;
	size_t punct;
}chartypes;

chartypes classify(FILE *f);

#endif
