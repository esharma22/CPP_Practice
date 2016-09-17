#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

string compChoice(int num);

string gameLogic(string comp, string user);

int main()
{
	srand(time(0));

	char op;
	int randNum, ch, compCount = 0, userCount = 0, draw = 0;
	int rcount = 0, pcount = 0, scount = 0;
	string user, comp, val;

	do
	{
		randNum = rand() % 3 + 1;

		cout << "\n\nRock, Paper, Scissors" << endl;
		cout << "Enter 1 for Rock, 2 for Paper, 3 for Scissors" << endl;
		cin >> ch;

		if(ch == 1)
		{
			rcount++;
		}
		else if(ch == 2)
		{
			pcount++;
		}
		else
		{
			scount++;
		}


		user = compChoice(ch);
		comp = compChoice(randNum);

		cout << "You chose- " << user << endl;
		cout << "Computer chose- " << comp << endl;
		val = gameLogic(comp, user);
		if(val == "comp")
		{
			cout << "Computer won" << endl;
			compCount++;
		}
		else if(val == "user")
		{
			cout << "You won" << endl;
			userCount++;
		}
		else 
		{
			cout << "It's a draw" << endl;
			draw++;
		}
		cout << "\nComputer won- " << compCount << " You won- " << userCount  << " Draw matches- " << draw << endl;

		cout << "Want to play again? Enter y for yes and n for no" << endl;
		cin >> op;

	}while(op == 'y' || op == 'Y');


	cout << "\nYou chose rock " <<rcount<< " times, paper " <<pcount<< " times, and scissors " <<scount<< " times" << endl;
	
	return 0;
}

string compChoice(int num)
{
	if(num == 1)
	{
		return "Rock";
	}
	else if(num == 2)
	{
		return "Paper";
	}
	else
	{
		return "Scissors";
	}
}

string gameLogic(string comp, string user)
{
	if(comp == user)
	{
		return "draw";
	}
	else if(comp == "Rock" && user == "Paper")
	{
		return "user";
	}
	else if(comp == "Rock" && user == "Scissors")
	{
		return "comp";
	}
	else if(comp == "Paper" && user == "Rock")
	{
		return "comp";
	}
	else if(comp == "Paper" && user == "Scissors")
	{
		return "user";
	}
	else if(comp == "Scissors" && user == "Rock")
	{
		return "user";
	}
	else if(comp == "Scissors" && user == "Paper")
	{
		return "comp";
	}
}
