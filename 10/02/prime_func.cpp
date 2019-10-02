#include <iostream>

using namespace std;

int IsItPrime(int num);

int main()
{
	int a;
	bool result;

	cout << "Enter a number\n";
	cin >> a;
	
	result = IsItPrime(a);

	if (result == false){
		cout << "The number entered is NOT prime.\n";

		system("pause");
		exit(-1);
	}
	cout << "The number entered is prime!\n";
	system("pause");
	return 0;

}

int IsItPrime(int num)
{
	int i;
	bool answer=true;
	
	for (i = 2; i < num; i++){
		if (num%i == 0){
			answer = false;
			break;
		}

	}

	return (answer);
}
