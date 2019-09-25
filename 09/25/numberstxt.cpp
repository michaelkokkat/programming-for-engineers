#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream outFile;
	ifstream inFile;
	int num=10;
	int integer;

	outFile.open("Numbers.txt", ios::out);

	if (outFile.fail())
	{
		cerr << "Error creating the file\n";
		exit(-1);
	}


	outFile << num << endl;

	for (int i = 1; i <= num; i++)
	{
		cout << "Enter an integer: ";
		cin >> integer;
		outFile << integer << endl;
	}

	outFile.close();

	inFile.open("Numbers.txt", ios::in);

	if (inFile.fail())
	{
		cerr << "Error opening the input file\n";
		exit(-1);
	}

	inFile >> num;

	for (int i = 1; i <= num; i++)
	{
		inFile >> integer;
		cout << "Integer " << i << ": " << integer << endl;
	
	}

	inFile.close();



	return (0);
}
