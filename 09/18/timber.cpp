#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int total_acres = 14000, year0 = 2500, years;
	double xyz=0, growth_rate = 1.02;

	cout << "Enter the number of years to check reforestation for.\n";
	cin >> years;

	while (years <= 0)
	{
		cout << " Error: Enter ONLY positive number of years.\n";
		cin >> years;
	}

	cout << left << setw(6) << " " << "Year |";
	cout << left << " " << "Acres Forested\n";
	for (int i = 1; i <= years; i++)
	{
		xyz = year0*pow(growth_rate, i);
		cout << left << setw(6) << " " << i;
		cout << left << setw(8) << " " << xyz << "\n";
	}
	system("pause");
	return 0;

}
