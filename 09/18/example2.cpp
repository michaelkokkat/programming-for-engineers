

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int integer=0;
	
		cout << "Enter an integer between 0 and 120 (inclusively).\n";
		cin >> integer;

		while ((integer < 0) || (integer > 120))
		{
			cout << " Error: Enter an integer between 0 and 120 (inclusively).\n";
			cin >> integer;
		}
		cout << "Entry declared VALID.\n"; \
			return 0;

}
