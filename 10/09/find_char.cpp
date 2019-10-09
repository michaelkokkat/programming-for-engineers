#include <iostream> 
using namespace std;
#define SIZE 9
int search(char foo[], int n, char key);

int main()
{
	char foo[SIZE];
	char key;
	int index, n = SIZE;

	cout << "Enter 10 unique characters consecutively, pressing the enter key after each one:\n";

	for (int i = 0; i < 10; i++) {
		cin >> foo[i];
	}

	cout << "\nEnter the key character, which you'd like to locate in the array:\n";
	cin >> key;
	index = search(foo, n, key);
	if (index != -1){
		cout << "\nThe key character is in position " << index << " of the array" << endl;
	}
	else{
		cout << "\nThe key character does not exist in the array" << endl;
	}
	system("pause");
	return 0;
}

int search(char foo[], int n, char key)
{
	int index;

	for (int i = 0; i < n; i++) {
		if (key == foo[i]){
			index = i+1;
			break;
		}
		else {
			index = -1;
		}
	}

	return index;
}
