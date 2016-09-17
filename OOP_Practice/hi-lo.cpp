#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int guess;
	char ch;
	srand(time(0));

	do
	{
		int number = rand() % 100;

		cout << "Let's play a game. I am thinking of a number from 1 to 100" << endl;
		cout << "You have 7 chances to guess the nummber. Let's begin" << endl;
		
		for(int i = 0; i < 7; i++)
		{
			cout << "Guess #" << i+1 << " ";
			cin >> guess;

			if(guess > 100 || guess < 1)
			{
				cout << "Number is between 1 and 100" << endl;
			}
			else if(guess > number)
			{
				cout << "Your guess is too  high. Try again!" << endl;
			}
			else if(guess < number)
			{
				cout << "Your guess is too low. Try again!" << endl;
			}
			else if(guess == number)
			{
				cout << "YAY!! You guessed right!" << endl;
				break;
			}
		}
		cout << "Play again? Enter y for yes or n for no" << endl;
		cin >> ch;
	}while(ch == 'y' || ch == 'Y');

	return 0;
}


