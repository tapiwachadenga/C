#include <string>
#include "func.h"

using namespace std;

int main()
{
	string people[] = {"Timhola", "Tamuka", "Tendai", "Tapiwa"};

	for (string person: people)
		myFunc(person);
}
