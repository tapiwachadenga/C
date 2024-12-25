#include <stdlib.h>
#include <stdio.h>
#include "binary.h"

int main(void)
{
	char inputArr[] = {'1', '0'};
	const char *input = inputArr;
	int decimal = convert(input);
	fprintf(stdout, "\n%d\n", decimal);
}
