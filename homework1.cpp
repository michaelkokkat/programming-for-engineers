/*****************************************/
/* My Name, My Student Number */
/* Sept 1, 2016. */
/* This program prints out some messages: */
/* on the screen. */
/*****************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double length, perm_load, var_load, k=0;

	cout << "In order to design a structurally sound rectangular concrete beam, enter the required specifications as prompted:\n";
while (k!=1){

	cout << "\nEnter the x-coordinate of the 1st point on the line: ";
	cin >> x1;

	cout << "Enter the y-coordinate of the 1st point on the line: ";
	cin >> y1;

	cout << "Enter the x-coordinate of the 2nd point on the line: ";
	cin >> x2;

	cout << "Enter the y-coordinate of the 2nd point on the line: ";
	cin >> y2;


	sideA = x2 - x1;
	sideB = y2 - y1;

	slope = sideB/sideA;

	cout << "The slope of the line containing the points (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is " << slope << ".\n";

	cout << "2. Calculating area of triangle when base and height are given.\n";

	cout << "Enter 1 to exit the program, or any other number to repeat: ";
	cin >> k;
}
	
	return 0;

}
