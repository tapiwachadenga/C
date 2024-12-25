#include <iostream>
#include <string>

using namespace std;

int main()
{
	string cars[] = {"BMW", "Benz", "Range", "Volvo"};
	/*	
	cars[4] = "Opel";
	cars[5] = "Kia";
	cars[6] = "Ford";
	*/

	for (string car: cars)
		cout << car << endl;

	cout << "Number of elements: " << sizeof(cars) / sizeof(string) << endl;
}
