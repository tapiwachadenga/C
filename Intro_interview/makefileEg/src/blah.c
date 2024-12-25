#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getSpaceIndex(char *name);

int main(){
	char name[] = "TapiwaChimurenga Chadenga";
	int len = getSpaceIndex(name);
	char firstName[len];
	strncpy(firstName, name+(0), len);
	printf("\nWelcome back, %s! Here's today's schedule.\n\n", firstName);
	return EXIT_SUCCESS;
}

int getSpaceIndex(char *name)
{
	return (int)(strchr(name, ' ') - name);
}
