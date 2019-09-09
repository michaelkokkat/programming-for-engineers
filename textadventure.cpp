#include <iostream>
#include <cmath>
#include <string>
using namespace std;

char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };

int checkwin();
void board();

int main()
{
	string choic, name;
	int player = 1, i, choice;

	char mark;

	cout << "Greetings User. Identify yourself: ";
	cin >> name;


	cout << "\nHi " << name << ", it's me, Michael. I just needed to be sure it was you.\n";
	cout << "\nI remembered today was special for some reason, so I thought I'd send short and sweet digital hello \nbecause I'm cool like that.\n";
	cout << "\nFirst things first: how are you? (if you could avoid capital letters that would be great, thanks)\n";
	cin >> choic;

	if (choic == "good") {
		cout << "\nI'm really glad to hear that. I hope you're doing well, having a blast at UVA, and that you're in the process of settling in nicely. \n";
		cout << "\nI wasn't entirely sure what you would like for your birthday,\n
		(yes, it's your birthday, you're welcome for the reminder)\nso I decided to include the tic-tac-toe game we coded for class. It's 
			2 player, and I hope the instructions are fairly straightforward.\n\nBUT MY POINT IS happy birthday, I hope you have a great one.";
	

	}

	else if (choic == "okay")
	{
cout << "\nThat's unfortunate. Just know that it will get better, and that you should look forward to the near future where you will be good. \n\n Aside from the present moment, I hope you're doing well, and that you're in the process of settling in nicely. \n";

		cout << "\nI wasn't entirely sure what you would like for your birthday,\n
		(yes, it's your birthday, you're welcome for the reminder)\nso I decided to include the tic-tac-toe game we coded for class. It's 
			2 player, and I hope the instructions are fairly straightforward.\n\nBUT MY POINT IS happy birthday, I hope you have a great one.";
	
	}

	else if (choic == "alright")
	{
cout << "\nI'm glad to hear that. Things will even become good in the near future, trust me. I hope you're doing well, having a blast at UVA, and that you're in the process of settling in nicely. \n";

		
		cout << "\nI wasn't entirely sure what you would like for your birthday,\n
		(yes, it's your birthday, you're welcome for the reminder)\nso I decided to include the tic-tac-toe game we coded for class. It's 
			2 player, and I hope the instructions are fairly straightforward.\n\nBUT MY POINT IS happy birthday, I hope you have a great one.";
	
	}

	else if (choic == "bad")
	{
cout << "\nI really hope you're joking; if you aren't, just know things WILL get better, and you WILL be good in the near future.\nAside from that, I hope you're doing well, and that you're in the process of settling in nicely. \n";

		
		cout << "\nI wasn't entirely sure what you would like for your birthday,\n
		(yes, it's your birthday, you're welcome for the reminder)\nso I decided to include the tic-tac-toe game we coded for class. It's 
			2 player, and I hope the instructions are fairly straightforward.\n\nBUT MY POINT IS happy birthday, I hope you have a great one.";
	
	}

	else if (choic == "better")
	{
cout << "\nI'm really glad to hear that. I hope you're doing well, having a blast at UVA, and that you're in the process of settling in nicely. \n";

		
		cout << "\nI wasn't entirely sure what you would like for your birthday,\n
		(yes, it's your birthday, you're welcome for the reminder)\nso I decided to include the tic-tac-toe game we coded for class. It's 
			2 player, and I hope the instructions are fairly straightforward.\n\nBUT MY POINT IS happy birthday, I hope you have a great one.";
	
	}


	else {
		cout << "I'm not entirely sure what you said. Computer algorithms are fairly limited at a beginner level. In any case, I hope you're doing well, having a blast at UVA, and that you're in the process of settling in nicely. \n ";
		
		
		cout << "\nI wasn't entirely sure what you would like for your birthday,\n
		(yes, it's your birthday, you're welcome for the reminder)\nso I decided to include the tic-tac-toe game we coded for class. It's 
			2 player, and I hope the instructions are fairly straightforward.\n\nBUT MY POINT IS happy birthday, I hope you have a great one.";
	
	}
cout << "Good luck, goodbye and a very very happy birthday. I hope it's a good one.\n\n PRESS 1 TO COMMENCE GAME\n";
cin>>numnum;
	
	if (numnum!=1){
		cout<< "Aw, that's a shame; you should try the game. You know what, I'm going to initiate it anyway, so hah:";
	cin.get();
	}
	do
	{
		board();
		player = (player % 2) ? 1 : 2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

		mark = (player == 1) ? 'X' : 'O';

		if (choice == 1 && square[1] == '1')

			square[1] = mark;
		else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
		else
		{
			cout << "Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
		i = checkwin();

		player++;
	} while (i == -1);
	board();
	if (i == 1)

		cout << "==>\aPlayer " << --player << " win ";
	else
		cout << "==>\aGame draw";

	cin.ignore();
	cout<<"\n\n\nThis was fun. TAKE CARE AND HAVE A GREAT DAY.";
	cin.get();
	return 0;
}

/*********************************************
	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT
**********************************************/

int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
		&& square[4] != '4' && square[5] != '5' && square[6] != '6'
		&& square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}


/*******************************************************************
	 FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void board()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}


 
