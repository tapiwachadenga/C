#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include "linkedList.h"

int main()
{
	srand((unsigned)time(NULL));
	insertHead("Tapiwa");
	insertHead("Amber");
	insertHead("Lipsy");
	insertHead("Zuze");
	insertHead("Mike");
	insertHead("Pakaipa");
	insertHead("Linda");
	printNodes();

	deleteHead();
	printNodes();

	insertTail("Ndakanaka");
	printNodes();
	
	deleteTail();
	printNodes();

	int index = rand() % (1 + numberOfNodes());
    	
	insertAtIndex("Kush", index);
	printNodes();
    
	index = rand();
        
	deleteAtIndex(index);
	printNodes();
        fprintf(stdout, "\n");

	char data[SIZE] = "Amber";
	fprintf(stdout, "indexOfNode(%s) = %d", data, indexOfNode(data));
        fprintf(stdout, "\n");

	/*
	*/

	sortNodes();
	printNodes();
	fprintf(stdout, "\n");

	return EXIT_SUCCESS;
}
