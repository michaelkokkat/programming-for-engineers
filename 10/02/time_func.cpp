#include <iostream>

using namespace std;

int TimeInSeconds(int hour, int minute, int second);

int main()
{
	int result, a, b, c;

	cout << "Enter the number of hours\n";
	cin >> a;
	cout << "Enter the number of minutes\n";
	cin >> b;
	cout << "Enter the number of seconds\n";
	cin >> c;
	result = TimeInSeconds(a, b, c);

	cout << "The total number of seconds in that time is " << result << ".\n";

	system("pause");
	return 0;

}

int TimeInSeconds(int hour, int minute, int second)
{
	int total;
	total = second + (hour * 3600) + (minute * 60);
	return(total);
}
