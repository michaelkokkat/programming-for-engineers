#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double choice;

	cout << "You are walking through a ";


	cout << "\nEnter the x-coordinate of the 1st point on the line: ";
	cin >> choice;

	if (choice == 1){
	cout << "Enter the y-coordinate of the 1st point on the line: ";
	cin >> choice;
		if (choice == 1){
	cout << "Enter the y-coordinate of the 1st point on the line: ";
	cin >> choice;
		
	}
	
	else if (choice == 2)
	{
	cout << "Enter the x-coordinate of the 2nd point on the line: ";
	cin >> choice;

	}
	
	else {
	cout << "";	
	}
		
	}
	
	else if (choice == 2)
	{
	cout << "Enter the x-coordinate of the 2nd point on the line: ";
	cin >> choice;
	if (choice == 1){
	cout << "Enter the y-coordinate of the 1st point on the line: ";
	cin >> choice;
		
	}
	
	else if (choice == 2)
	{
	cout << "Enter the x-coordinate of the 2nd point on the line: ";
	cin >> choice;

	}
	
	else {
	cout << "";	
	}
		
	}
	
	else {
	cout << "";	
	}

	cout << "\nTHE END.\n";
	
	system("pause");
	return 0;
  }
