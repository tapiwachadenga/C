#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "binary.h"

int convert(const char *input)
{
    int base_ten = 0;
    int length = strlen(input);

    for (int i = 0; i < length; i++)
    {
        if ( *(input + i) == '0' || *(input + i) == '1' )
	{
	    fprintf( stdout, "\ninputChar: %c\tinputInt: %d\tbase: %d\tpower: %f",*(input + i), charToDouble(*(input + i)), (int)(*input + i) - '0', pow(2, length - i - 1) );		
            // base_ten += ( (int)(*input + i) - '0' ) * pow(2, length - i - 1);
	    base_ten += charToDouble(*(input + i)) * pow(2, length - i - 1);
	}
        else
            return INVALID;
    }
    return base_ten;
}

int charToDouble(char cha)
{
    switch(cha)
    {
	case('0'): return 0;
	break;
	case('1'): return 1;
	break;
	default: return -1;
    }
}
