#include <iostream>
#include <cmath>
#include "Header.h"
# define SIZE 10
using namespace std;

int main() {
	int foo[SIZE];
	int size = SIZE, choice;
	double answer;

	cout << "Enter 10 integers consecutively, pressing the enter key after each one:\n";

	for (int i = 0; i < 10; i++) {
		cin >> foo[i];
	}

	cout << "\nEnter 1 to find minimum value within array \nEnter 2 to find maximum value within array \nEnter 3 to find average value of array \nEnter 4 to find variance of array \nEnter 5 to find standard deviation of array\n";
	cin >> choice;

	if (choice == 1)
	{
		answer = min_val(foo, size);
	}

	else if (choice == 2)
	{
		answer = max_val(foo, size);
	}

	else if (choice == 3)
	{
		answer = average(foo, size);
	}

	else if (choice == 4)
	{
		answer = variance(foo, size);
	}

	else if (choice == 5)
	{
		answer = std_dev(foo, size);
	}

	else
	{

		cout << "Error: invalid choice entered" << endl;
	}

	cout << "\nThe value requested is " << answer << endl;

	system("pause");
	return 0;

}
