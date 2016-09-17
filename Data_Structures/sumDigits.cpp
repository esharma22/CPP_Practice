#include <iostream>
using namespace std;

int sumDigits(int num);

int main()
{
	int num, sum;

	cout << "Enter any number with at least two digits" << endl;
	cin >> num;

	sum = sumDigits(num);

	cout << "Sum of digits in " << num << " is: " << sum << endl;
}

int sumDigits(int num)
{
	if(num < 10)
		return num;
	else
		return sumDigits(num /10) + num % 10;
}
