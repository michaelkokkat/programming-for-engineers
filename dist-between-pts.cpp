#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x1,y1,x2,y2,side1,side2,distance;

		cout << "Enter the x-coordinate of the first point\n";
		cin >> x1;
		cout << "Enter the y-coordinate of the first point\n";
		cin >> y1;
		cout << "Enter the x-coordinate of the second point\n";
		cin >> x2;
		cout << "Enter the y-coordinate of the second point\n";
		cin >> y2;

		side1 = x2 - x1;
		side2 = y2 - y1;
		distance = sqrt(side1 * side1 + side2 * side2);

		cout << "The distance between the two points is " << distance << "\n";
		return 0;

}
