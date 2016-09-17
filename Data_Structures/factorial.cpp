#include <iostream>
using namespace std;

int factorial(int num)
{
	if(num < 1)
		return 1;
	return factorial(num-1) * num;
}

int main()
{
	for(int i = 0; i < 7; i++)
	{
		cout << factorial(i) << '\t';
	}
	cout << endl;

	return 0;
}
