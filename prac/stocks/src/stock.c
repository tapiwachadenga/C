#include "stock.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

Stock *createStock(char *ticker, int units, double bid, double offer)
{
	srand((unsigned)time(NULL));
	Stock *stock = (Stock *)malloc(sizeof(Stock));
	char *ticker_ = (char *)malloc(sizeof(char) * 4);
	strcpy(ticker_, ticker);
	printf("\nticker: %lu\nstock_ticker: %lu\n", sizeof(ticker), sizeof(stock->ticker));
	// strcpy(stock->ticker, ticker);
	stock->ticker = ticker_;	
	stock->units = units;
	stock->bid = bid;
	stock->offer = offer;
	
	return stock;
}

Stock *printStock(Stock *stock)
{
	fprintf(stdout, "\n%10s|%10s|%10s|%10s|%10s|", "Ticker", "Units", "Bid", "Offer", "Spread"); 
     	printf("\n-------------------------------------------------------\n");	
	fprintf(stdout, "%10s|%10d|%10.4f|%10.4f|%10.4f|", stock->ticker, stock->units, stock->bid, stock->offer, stock->offer - stock->bid);   
     	printf("\n\n");	
     	return stock;	
}
