#include <iostream>

using namespace std;

int main() {
	int age{ 0 };
	cout << "Enter your age: " << endl;
	cin >> age;
	if ((age >=18) && (age<=55))
	{
		cout << "Transaction Successful!" << endl;
	}
	else
	{

		cout << "Transaction Failed!" << endl;
	}
    system ("pause");
	return 0;
}
