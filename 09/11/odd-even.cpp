#include <iostream>

using namespace std;

int main() {
 
	int myInt{ 0 };
	cin >> myInt;
 
	if (myInt % 2 == 0)
	{

		cout << "You have entered an integer which is: EVEN" << endl;
	}
	else
	{

		cout << "You have entered an integer which is: ODD" << endl;
	}
 
	// Wait to press return.
	cin >> myInt;
 
	// Exit program.
	return 0;
}
