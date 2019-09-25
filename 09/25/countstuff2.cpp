#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream outFile;
	ifstream inFile;
	string filename, line;
	char ch;
	int num = 10, chars = 0, i = 0;
	int integer, words = 0, numofChars = 0, numofWords = 0;


	cout << "Enter the name of the file you wish to open.\n";
	cin >> filename;

	inFile.open(filename, ios::in);

	if (inFile.fail())
	{
		cerr << "Error opening the input file\n";
		system("pause");
		exit(-1);
	}

	while (!inFile.eof())
	{
		inFile.get(ch);

		if ((ch == ' ') || (ch == '\n'))
		{
			numofWords++;
		}
		else {
			numofChars++;

		}
		chars = numofChars + chars;
		words = numofWords + words;
		i++;

	}
	cout << "Number of characters: " << chars << endl;
	cout << "Number of words: " << words + 1 << endl;
	cout << "Number of lines: " << i << endl;

	system("pause");
	inFile.close();



	return (0);
}
