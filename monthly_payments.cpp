#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double A, ann_rate, r, yr_length, n, P, k, ll;

	cout << "Enter the loan amount in USD: ";
	cin >> A;

	cout << "Enter the annual interest rate percentage: ";
	cin >> ann_rate;

	cout << "Enter the loan duration in years: ";
	cin >> yr_length;

	r = ann_rate / (100*12);
	n = yr_length * 12;
	ll = 1 + r;
	k = pow(ll, -n);

	P = (A*r) / (1 - k);

	cout << "Each monthly payment is $" << P << ".\n";
	system("pause");

	return 0;

}
