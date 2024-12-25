#include "pangram.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdint.h>  

int main(void)
{
	fprintf(stdout,"%s\n", is_pangram("1*abcdef_ghijkaass!@##)(*&sssssaaaannanananlamsndogpqrstuvwxyz") ? "true" : "false");
	return EXIT_SUCCESS;
}	
