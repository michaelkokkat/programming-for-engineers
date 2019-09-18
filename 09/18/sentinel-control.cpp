#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double x=1, sum=0, average, clas=0;

	cout << "Enter the marks of each student in the class, enter a negative number to stop reading values.\n"; 
	while (x>0)
	{
	
		cin >> x;
		if (x < 0)
			break;
		sum += x;
		clas++;
	}
	average = sum / clas;
	cout << "The average marks of the class is " << average <<".\n";

	return 0;

}
