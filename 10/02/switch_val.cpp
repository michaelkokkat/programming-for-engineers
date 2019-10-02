#include <iostream>

using namespace std;

double switchtheval(int a1, int b1);

int main()
{
	double a,b;
	double foo[2] = {};

	cout << "Enter a decimal number\n";
	cin >> a;
	cout << "a = " << a << endl;

	cout << "\nEnter another decimal number\n";
	cin >> b;
	cout << "b = " << b << "\n\n";



	b = switchtheval(a,b) - b;
	

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "Thus the values have been switched\n";

	system("pause");
	return 0;

}

double switchtheval(int a1, int b1)
{
	double result;
	result = a1 + b1;
	return (result);
}
