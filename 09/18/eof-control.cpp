#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double exam_score, sum = 0, average;
	int clas = 0;

	cout << "Enter exam scores separated by whitespace. ";

	cin >> exam_score;
	while (!cin.eof())
	{
		sum = sum + exam_score;
		++clas;
		cin >> exam_score;
	}

	average = sum / clas;
	cout << clas << " students took the exam.\n";
	cout << "The exam average is " << average << endl;
	system("pause");
	return 0;

}
