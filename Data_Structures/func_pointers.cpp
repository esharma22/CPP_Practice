#include <iostream>
using namespace std;

struct arithmeticStruct
{
	char operation;

	typedef int (*arithmeticFcn)(int, int);
};

int add(int x, int y);

int sub(int x, int y);

int mult(int x, int y);

int divide(int x, int y);

arithmeticStruct getFunction(char op);

static arithmeticStruct arithmeticArray[]
{
	{'+', add}
	{'-', sub},
	{'*', mult},
	{'/', divide};
};

int main()
{
	int x, y, answer;
	char op;

	cout << "Enter two positive integers" << endl;
	cin >> x >> y;

	cout << "Please choose one operation: + - * /" << endl;
	cin >> op;

	arithmeticFcn fcn = getFunction(op);
	
	cout << x << op << y << " is " << fcn(x, y) << endl;

	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mult(int x, int y)
{
	return x * y;
}

int divide(int x, int y)
{
	return x / y;
}

arithmeticFcn getFunction(char op)
{
	switch(op)
	{
		case '+': return add;

		case '-': return sub;

		case '*': return mult;

		case '/': return divide;
	}
}
