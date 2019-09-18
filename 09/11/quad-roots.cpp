#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a,b,c, delta;
	cout << "In the format ax^2+bx+c, please fill in the coefficients of the quadratic equation: \n" << endl;
	
	cout << "a = ";
	cin >> a;
	
	cout << "b = ";
	cin >> b;
	
    cout << "c = ";
	cin >> c;
	
	delta = (b*b) - 4*a*c;
	
	if (delta>0)
	{
		cout << "The given quadratic equation has two real and distinct roots." << endl;
	}
	
	else if (delta==0)
	{
		cout << "The given quadratic equation has one real root." << endl;
	}
	
	else if (delta<0)
	{
		cout << "The given quadratic equation has no real roots." << endl;
	}
 
	return 0;
}
