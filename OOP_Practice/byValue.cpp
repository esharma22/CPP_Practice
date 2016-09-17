#include <iostream>
using namespace std;

int sumTo(int x);

int main()
{
	int x, total;

	cout << "Enter a number between 1 to 100" << endl;
	cin >> x;

	total = sumTo(x);
	cout << "Total sum- " << total << endl;

	return 0;
}

int sumTo(int x)
{
	int sum = 0;

	for(int i = 0; i < x; i++)
	{
		sum = sum + i;
	}
	return sum;
}
