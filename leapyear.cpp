#include <iostream>
using namespace std;


int main()
{
	int year;

	cout << "Enter year: ";
	cin >> year;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		cout << "year " << year << " is a leap year" << endl;
	else
		cout << "year " << year << " is NOT a leap year" << endl;

	return 0;
}
