#include <iostream>
using namespace std;

void minmax(int x, int y, int &min, int &max);

int main()
{
	int a = 32, b = 22;
	minmax(a, b, a, b);
	
	cout << "Min-" << a << '\t' << "Max-" << b << endl;
	return 0;
}

void minmax(int x, int y, int &min, int &max)
{
	if(x > y)
	{
		min = y;
		max = x;
	}
	else
	{
		min = x;
		max = y;
	}
}
