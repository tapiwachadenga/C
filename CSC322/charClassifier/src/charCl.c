#include <ctype.h>
#include "charCl.h"

chartypes classify(FILE *f)
{
	chartypes types = {0, 0, 0};
	int ch;

	while ((ch=fgetc(f)) != EOF)
	{
		// fprintf(stdout, "\nisspace(%c) = %d\n", ch, isspace(ch));
		types.space += !!isspace((unsigned char)ch);
		types.alnum += !!isalnum((unsigned char)ch);
		types.punct += !!ispunct((unsigned char)ch);
	}
	return types;
}		
