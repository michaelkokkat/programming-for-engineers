#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	string choice, name;

	cout << "Greetings User. Identify yourself: ";
	cin >> name;


	cout << "\nHi "<<name<<", it’s me, Michael. I just needed to be sure it was you.\n";
	cout << "Remembered today was special for some reason, so I thought I'd send a digital version of myself over to say hello \nbecause I'm cool like that";
	cout <<"\nThis is so cool. Think about how much more damage I could do as a machine!\n";
	cout << "But I'm getting off track. First things first: how are you? (if you could avoid capitals and punctuation that would be great)\n";
	cin >> choice;

	if (choice == "good"){
	cout << "";
	cin >> choice;
		
	}
	
	else if (choice == "okay")
	{
	cout << "You said hello ";
	cin >> choice;

	}
	
	else if (choice == "alright")
	{
	cout << "You said hello ";
	cin >> choice;

	}
	
	else if (choice == "bad")
	{
	cout << "You said hello ";
	cin >> choice;

	}
	
	else if (choice == "better")
	{
	cout << "You said hello ";
	cin >> choice;

	}
	
	}
	else {
	cout << "";	
	}
	
	

	cout << "\nTHE END.\n";
	
	system("pause");
	return 0;
  }
