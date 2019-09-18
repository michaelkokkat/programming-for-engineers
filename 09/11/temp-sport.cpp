#include <iostream>

using namespace std;

int main() {
	int temp{ 0 };
	cout << "Enter the temperature: " << endl;
	cin >> temp;
	if (temp >=80)
	{
		cout << "Swimming is the best activity for this temperature." << endl;
	}
	
	else if ((temp <80) && (temp>=60))
	{

		cout << "Soccer is the best activity for this temperature." << endl;
	}
	
		else if ((temp <60) && (temp>=40))
	{

		cout << "Volleyball is the best activity for this temperature." << endl;
	}
	
		else if (temp <40)
	{

		cout << "Skiing is the best activity for this temperature." << endl;
	}
	
	else
	{
	    cout << "Error: temperature entered not within range." << endl;
	}
	
  
	return 0;
}
