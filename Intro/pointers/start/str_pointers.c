#include <stdio.h>

void main()
{
	char *names[] = {"tapiwa", "Tawanda", "Tafadzwa", "Tapfuma"};

	for ( int i = 0; i < 4; i++)
		printf("%s\n", *(names + i));	
}
