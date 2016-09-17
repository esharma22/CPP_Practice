#include<iostream>
#include<cstdlib>
#include<ctime>

void easy();

void medium();

void hard();

using namespace std;

int main()
{
	int choice;

	cout << "Welcome to the guessing game" << endl;
	cout << "Select a level of difficulty" << endl;
	cout << "1- Easy (1-10)\n2-Medium (1-50)\n3-Hard (1-100)" << endl;
	cin >> choice;

	switch(choice)
	{
		case 1: easy();
		break;

		case 2: medium();
		break;

		case 3: hard();
		break;

		default: exit(0);
	}
	return 0;
}

void easy()
{
	srand(time(0));

	int randNum, guess;

	randNum = rand() % 10 + 1;

	cout << "Easy: 1 to 10" << endl;
	cout << "You have 3 chances to guess the computer's number" << endl;

	for(int i = 0; i < 3; i++)
	{
		cout << "Guess #" << i+1 << endl;
		cin >> guess;

		if(guess < randNum)
		{
			cout << "Too low. Try again." << endl;
		}
		else if(guess > randNum)
		{
			cout << "Too high. Try again." << endl;
		}
		else if(guess == randNum)
		{
			cout << "You won!" << endl;
			break;
		}
	}
}

void medium()
{
	srand(time(0));

	int randNum, guess;

	randNum = rand() % 50 + 1;

	cout << "Medium: 1 to 50" << endl;
	cout << "You have 4 chances to guess the computer's number" << endl;

	for(int i = 0; i < 4; i++)
	{
		cout << "Guess #" << i+1 << endl;
		cin >> guess;

		if(guess < randNum)
		{
			cout << "Too low. Try again." << endl;
		}
		else if(guess > randNum)
		{
			cout << "Too high. Try again." << endl;
		}
		else if(guess == randNum)
		{
			cout << "You won!" << endl;
			break;
		}
	}
}

void hard()
{
	srand(time(0));

	int randNum, guess;

	randNum = rand() % 100 + 1;

	cout << "Hard: 1 to 100" << endl;
	cout << "You have 5 chances to guess the computer's number" << endl;

	for(int i = 0; i < 5; i++)
	{
		cout << "Guess #" << i+1 << endl;
		cin >> guess;

		if(guess < randNum)
		{
			cout << "Too low. Try again." << endl;
		}
		else if(guess > randNum)
		{
			cout << "Too high. Try again." << endl;
		}
		else if(guess == randNum)
		{
			cout << "You won!" << endl;
			break;
		}
	}
}
