#ifndef STOCK_H
#define STOCK_H

typedef struct Time
{
	int hour;
	int min;
	int sec;
}Time;

typedef struct Date
{
	int month;
	int day;
	int year;
}Date;

typedef struct DateTime
{
	Date *date;
	Time *time;
}DateTime;

typedef struct Stock{

	char *ticker;
	int units;
	double bid;
	double offer;
	
}Stock;

Stock *createStock(char *ticker, int units, double bid, double offer);
Stock *printStock(Stock *);

#endif
