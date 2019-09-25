#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream outFile;
	ifstream inFile;
	string filename, line;
	int num = 10, chars = 0, i = 0;
	int integer, words = 0, numofWords = 0;


	cout << "Enter the name of the file you wish to open.\n";
	cin >> filename;

	inFile.open(filename, ios::in);

	if (inFile.fail())
	{
		cerr << "Error: file does not exist\n";
		cout << "Enter 1 if you would like to create the file\n";
			cin >> integer;
		if (integer == 1){




			outFile.open(filename, ios::out);

			if (outFile.fail())
			{
				cerr << "Error creating the file\n";
				exit(-1);
			}


			outFile << "NEWLY CREATED FILE" << endl;
			cout << "The file now exists!\n";
			outFile.close();
			system("pause");
			exit(1);
		}
		else{ exit(-1); }
	}

	cout << "The file exists!\n";

	inFile.open(filename, ios::in);

	if (inFile.fail())
	{
		cerr << "Error opening the input file\n";
		exit(-1);
	}

	inFile >> num;

	for (int i = 1; i <= num; i++)
	{
		inFile >> integer;
		cout << integer << endl;

	}

	inFile.close();



	return (0);
}
