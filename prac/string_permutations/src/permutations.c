#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "permutations.h"

void permutations(char *str, int start, int end)
{
	if(start == end)
	{
		fprintf(stdout, "%s\n", str);
		return;
	}

 	permutations(str, start + 1, end);
	
	// fprintf(stdout, "start = %d\tend = %d\n", start, end);
	for(int i = start + 1; i < end; i++)
	{
	//	fprintf(stdout, "in function call %d\n", start);
		if(str[start] == str[i])
			continue;
		swap(str, start, i);
		permutations(str, start + 1, end);
		swap(str, start, i);
	}
}

void swap(char *str, int i, int j)
{
	char temp = *(str + i);
	*(str + i) = *(str + j);
	*(str + j) = temp;
	//fprintf(stdout, "%c\t%d\t%d\nstrlen = %d\n", temp, i, j, (int)strlen(str));
}

