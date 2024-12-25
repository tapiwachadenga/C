#include <iostream>
#include "rectangle.h"
#include "square.h"

using namespace std;

int main(int argc, char **argv){
	
	Rectangle *rptr;
	// Rectangle rt2(2.0, 2.0);

	Square sq(4.0);
	rptr = &sq;
	sq.print_str();

	Rectangle arr[] = {Rectangle(3.0, 8.0), Square(8.0)};

	for ( Rectangle rect : arr)
		cout << "Area :" << rect.Area() << endl;



	// cout << sq.print_str() << endl;
	// cout << sq.prv_str << endl;

        cout << sq.Area() << endl;                                                                            cout << sq.ScaledArea(2.0) << endl;

	FileReader fl("main.cpp");
	fl.readFile();
	/*
	int x = 9;
	int *ptr = &x;
	cout << x << endl;
	*ptr = 45;
	cout << x << endl;
	*/
	return 0;
}
