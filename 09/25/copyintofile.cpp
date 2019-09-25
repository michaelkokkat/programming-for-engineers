#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream outFile;
	ifstream inFile;
	string outfilename, infilename, line;


	cout << "Enter the name of the input file.\n";
	cin >> infilename;

	cout << "Enter the name of the output file.\n";
	cin >> outfilename;

	inFile.open(infilename, ios::in);

	if (inFile.fail())
	{
		cerr << "Error opening the input file\n";
		system("pause");
			exit(-1);
		}

	outFile.open(outfilename, ios::out);

	if (outFile.fail())
	{
		cerr << "Error opening the output file\n";
		system("pause");
		exit(-1);
	}


	while (!inFile.eof())
	{
		getline(inFile, line);

		outFile << line << endl;
	}
	system("pause");
	inFile.close();
	outFile.close();


	return (0);
}
