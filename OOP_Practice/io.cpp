#include <iostream>
using namespace std;

int readNum()
{
	int num;
	cout << "Enter a number" << endl;
	cin >> num;

	return num;
}

int writeNum(int x, int y)
{
	int sum = x + y;
	return sum;
}
