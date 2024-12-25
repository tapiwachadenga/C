#include <stdio.h>
#include <stdlib.h>
#include "stock.h"


// int main(int argc, char **argv)
int main()
{
	Stock *stock = createStock("TAPS", 12, 12.34, 23.50);
	printStock(stock);
}
