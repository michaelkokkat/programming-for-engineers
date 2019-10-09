#include <iostream>
#include <fstream>
#include <string>
#define SIZE1 4
#define SIZE2 100

using namespace std;

int main()
{
	ofstream outFile;
	ifstream inFile;
	string filename, line;
	char ch;
	char answer_key[SIZE2];
	int studentID[SIZE1];
	int i;

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
			for (int i = 0; i < SIZE1; i++){
				inFile.get(ch);
				if (ch != ' '){
					studentID[i] = ch;
				}
			}

			for (i = 0; i < SIZE2; i++){
				if (ch != '\n')
				{
					inFile.get(ch);
					answer_key[i] = ch;
					
				}
				else{
					break;
				}
			}

			for (int n = 0; n < i; n++){
				cout << answer_key[n];
			}

	}




	system("pause");
	inFile.close();



	return (0);
}
