#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream outFile;
	ifstream inFile;
	string filename, line;
	int num = 10,chars = 0, i=0;
	int integer, words = 0, numofWords = 0;
	

	cout << "Enter the name of the file you wish to open.\n";
	cin >> filename;

	inFile.open(filename, ios::in);

	if (inFile.fail())
	{
		cerr << "Error opening the input file\n";
		exit(-1);
	}
	
	while (!inFile.eof())
	{
		getline(inFile, line);

		int numofChars = line.length();
		for (unsigned int n = 1; n <= line.length(); n++)
		{
			if ((line.at(n) == ' ') || (line.at(n) == '\n'))
			{
				numofChars--;
				numofWords++;
			}
		}
		chars = numofChars + chars;
		words = numofWords + words;
		i++;
		
	}
	cout << "Number of characters: " << chars << endl;
	cout << "Number of words: " << words+1 << endl;
	cout << "Number of lines: " << i << endl;

	
	inFile.close();



	return (0);
}
