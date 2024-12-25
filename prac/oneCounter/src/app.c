#include <stdio.h>
#include <stdlib.h>
#include "eliuds_eggs.h"

int main(void)
{
	int num = 11;
	fprintf(stdout, "\nNumber of 1's in %d is %d\n\n", num, egg_count(num)); 
}
