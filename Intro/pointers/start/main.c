#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "header_file.h"

void main()
{
        srand(time(NULL));
        int size = rand() % 15;

        int *ptr = array(size);
        printf("\nAverage : %.2f\n", average(ptr, size));

	int *ptr2 = NULL;
	printf("The value of *ptr is : %d\n\n", *ptr );

	char *names[] = {"taps", "tips", "topsi"};

	for (int i = 0; i < 3; i++) {printf( "name[%d] = %s\n", i, *(names + i) );}

	char *words[][100] = {{"yay", "its friyay"}, {"mmmm", "ppp"}};
	printf("word : %c\n", **words[0] );
}

