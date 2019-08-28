#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x1, y1, x2, y2, sideA, sideB, slope, area, circum, perim;

	cout << "1. Calculating slope of a line when two points are given.\n";


	cout << "\nEnter the x-coordinate of the 1st point on the line: ";
	cin >> x1;

	cout << "Enter the y-coordinate of the 1st point on the line: ";
	cin >> y1;

	cout << "Enter the x-coordinate of the 2nd point on the line: ";
	cin >> x2;

	cout << "Enter the y-coordinate of the 2nd point on the line: ";
	cin >> y2;
  
  perim = x1 + x2 + y1 + y2;

	cout << "The perimeter of the given quadrilateral is" << perim << ".\n";
	system("pause");
	return 0;
  }
