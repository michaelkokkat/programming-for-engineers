#include <iostream>

using namespace std;

int guessing(int a1);

int main()
{
	int guesses, answer;

	answer = rand() % (10 - 1 + 1) + 1;

	guesses = guessing(answer);

	cout << "Well done! You got the right answer in " << guesses << " guesses.\n";

	system("pause");
	return 0;

}

int guessing(int a1)
{
	int guess,i=0;
	cout << "Guess the number I'm thinkin of.\n";
	cin >> guess;
	i++;
	while (guess != a1){
		cout << "Guess again.\n";
		cin >> guess;
		i++;
	}
	return (i);
}
