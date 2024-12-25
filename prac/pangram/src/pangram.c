#include "pangram.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdint.h>

bool is_pangram(const char *sentence)
{
    int n = strlen(sentence);
    char *sentence_ = (char*) malloc( n );

    for (int i = 0; *(sentence + i); i++)
	    *(sentence_ + i) = tolower( *(sentence + i));

    sentence_ = remove_non_alphas(sentence_);

    char *sentence__ = remove_char_duplicates(sentence_);

    // fprintf(stdout, "sent_: %ld\n", strlen(sentence_));
    return (strlen(sentence__) == 26);
}

char *remove_non_alphas(char *str)
{
    for(int i = 0; str[i]; ++i)
    {
	while( !( (str[i] >= 'a' && str[i] <= 'z' ) || str[i] == '\0' ) )
	{
	   int j;
	   for (j = i; str[j]; ++j)
		   str[j] = str[j + 1];
	   str[j] = '\0';
	}
    }
    return str;
}

char *remove_char_duplicates(char *str)
{
    int n = (int)strlen(str);
    int idx = 0;

    for (int i = 0; i < n; i++)
    {
	int j;
	for (j = 0; j < i; j++)
	    if (*(str + i) == *(str + j))
		break;
	
	if(j == i)
	    str[idx++] = str[i];
    }
    str[idx] = '\0';
    return str;
}
