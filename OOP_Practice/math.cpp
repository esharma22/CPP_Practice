#include <iostream>
using namespace std;

int main()
{
	double num1, num2;
	char operation;

	cout << "Enter a double value " << endl;
	cin >> num1;

	cout << "Enter a second double value " << endl;
	cin >> num2;

	cout << "Please choose one of the following operations:" << endl;
	cout << "1) + \n2) - \n3) * \n4) /" << endl;
	cin >> operation;

	if(operation == '+')
	{
		cout << "Sum = " << num1 + num2 << endl;
	}
	else if(operation == '-')
	{
		cout << "Diff = " << num1 - num2 << endl;
	}
	else if(operation == '*')
	{
		cout << "Mult = " << num1 * num2 << endl;
	}
	else if(operation == '/')
	{
		cout << "Div = " << num1 / num2 << endl;
	}
	else
	{
		exit(0);
	}

	return 0;
}
