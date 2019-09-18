#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int integer, factorial=1;

	cout << "Enter a non-negative integer.\n";
	cin >> integer;

	while (integer < 0)
	{
		cout << " Error: Enter ONLY a non-negative integer.\n";
		cin >> integer;
	}
	
	if (integer == 0) {
		cout << "The factorial of the given integer is 1.\n";
	}
	else {
		for (integer; integer > 0; integer = integer - 1)
		{
			factorial = factorial * integer;
		}

		cout << "The factorial of the given integer is " << factorial << ".\n";
	}
	return 0;

}
