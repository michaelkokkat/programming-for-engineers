#include <iostream>

using namespace std;

double cel_to_fahr(int temp);
double cel_to_kev(int temp);

int main()
{
	double temp1, converted_temp, foo = 0;

	cout << "Enter the temperature:\n";
	cin >> temp1;

	while ((foo != 1) && (foo != 2)){
		cout << "Enter 1 to convert temperature to degrees Fahrenheit, enter 2 to convert temperature to degrees Kelvin.\n";
		cin >> foo;

		if (foo == 1){
			converted_temp = cel_to_fahr(temp1);

			cout << "The temperature in Fahrenheit is " << converted_temp << " F.\n";
		}
		else if (foo == 2){
			converted_temp = cel_to_kev(temp1);

			cout << "The temperature in Kelvin is " << converted_temp << " K.\n";
		}
	}

	system("pause");
	return 0;

}

double cel_to_fahr(int temp)
{
	double result;
	result = (temp*(9 / 5)) + 32;
	return(result);
}

double cel_to_kev(int temp)
{
	double result;
	result = temp + 273.2;
	return(result);
}
