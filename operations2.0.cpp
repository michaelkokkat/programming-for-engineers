#include <iostream>
using namespace std; 

int main() {
	int a, b, add, divi, sub, mul;
    char choice;
	
	cout << "Press ‘a’ for addition \nPress ‘s’ for subtraction \nPress ‘m’ for multiplication \nPress ‘d’ for division\n"; 
		cin >> choice;
		
if (choice == 'a')
	{
	cout << "You chose: Addition\n";
	cout << "Enter two integers separated by a space:\n";
	cin >> a >> b;

	add = a + b;
	cout << "Sum: " << add << ".\n";
	}
	
else if (choice == 'm')
	{
	cout << "You chose: Multiplication\n";
	cout << "Enter two integers separated by a space:\n";
	cin >> a >> b;

	mul = a*b;
	
	cout << "Product: " << mul << ".\n";
	}
	
else if (choice == 's')
	{
	cout << "You chose: Subtraction\n";
	cout << "Enter two integers separated by a space:\n";
	cin >> a >> b;

	sub = a - b;
	
	cout << "Difference: " << sub << ".\n";
	}
	
else if (choice == 'd')
	{

	cout << "You chose: Division\n";
	cout << "Enter two integers separated by a space:\n";
	cin >> a >> b;

	divi = a / b;
	cout << "Quotient: " << divi << ".\n";
	}
	
else
	{

		cout << "Error: invalid choice entered" << endl;
	}

	
	system("pause");
	return 0;

}
