#include <iostream>
using namespace std;


int main(){

	int foo[10];

	cout << "Enter 10 integers consecutively, pressing the enter key after each one:\n";

	for (int i = 0; i < 10; i++) {
		cin >> foo[i];
	}
	cout << "\nThe program will now print your integers backwards:\n";

	for (int i = 9; i >= 0; i--){
		cout << foo[i] << "\n";
	}

	system("pause");
	return 0;
}
