#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, d, sideA, sideB, distance;

		cout << "Enter the x-coordinate of the first point\n";
		cin >> a;
		
		cout << "Enter the y-coordinate of the first point\n";
		cin >> b;

		cout << "Enter the x-coordinate of the second point\n";
		cin >> c;

		cout << "Enter the y-coordinate of the second point\n";
		cin >> d;

		sideA = c - a;
		sideB = d - b;

		distance = sqrt(sideA*sideA+sideB*sideB);

		cout << "The distance between points ("<<a<<", "<<b<< ") and ("<< c<<", "<<d<<") is " << distance << ".\n";
		
		return 0;

}
