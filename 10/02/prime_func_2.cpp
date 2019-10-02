#include <iostream>

using namespace std;

int IsItPrime(int num);

int main()
{
	int a;
	bool result;

	for (a = 2; a <= 10000; a++){

		result = IsItPrime(a);

		if (result == true){
			cout << a << "\n";

		}
	
	}
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
