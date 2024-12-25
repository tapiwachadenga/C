#include <stdio.h>
#include <stdlib.h>
#include "charCl.h"

int main()
{
	char *fileName = (char *) malloc(sizeof(char) * 255);
	fprintf(stdout, "Enter file path: ");
	fscanf(stdin, "%s", fileName);

	FILE *fp = fopen(fileName, "r");
	chartypes types;

	types = classify(fp);

	fprintf (stdout, "\n%-20s = %lu\n%-20s = %lu\n%-20s = %lu\n\n", "Spaces", types.space, "Alpha Numericals", types.alnum, "Punctuations", types.punct);
}

