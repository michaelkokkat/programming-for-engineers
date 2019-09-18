#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double x, sum=0, average, i, clas;

	cout << "Enter the number of students in the class.\n";
	cin >> clas;

	cout << "Enter the marks of each student in the class.\n"; 
	for (int i=1; i <= clas; i++)
	{
		cin >> x;
		sum += x;
	}
	average = sum / clas;
	cout << "The average marks of the class is " << average <<".\n";

	return 0;

}
