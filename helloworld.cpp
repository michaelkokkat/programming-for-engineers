#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, sum, div, rem, incre, decre;

	cout << "Enter two integers separated by a space:\n";
	cin >> a >> b;

	sum = a + b;
	div = a / b;
	rem = a%b;
	incre = a + b++;
	decre = a-- - b;
	a++;
	b--;
	a *= b;
	a %= b;

	cout << "1. Sum: " << sum << ".\n";
	cout << "2. Quotient: " << div << ".\n";
	cout << "3. Remainder: " << rem << ".\n";
	cout << "4. (Abbrevited) Product: " << a << ".\n";
	cout << "5. (Abbreviated) Remainder: " << b << ".\n";
	cout << "6. Postfix Increment: " << incre << ".\n";
	cout << "7. Prefix Decrement: " << decre << ".\n";
	system("pause");
		return 0;

	}
