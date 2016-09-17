#include <iostream>
using namespace std;

void minmax(int *a, int *b);
void min2(int &a, int &b);

int main()
{
	int x = 230;
	int y = 67;

	cout << x << '\t' << y << endl;
	min2(x, y);
	cout << x << '\t' << y << endl;
	return 0;
}


//Pass by address
void minmax(int *a, int *b)
{
	if(*a > *b)
	{
		int temp = *b;
		*b = *a;
		*a = temp;
	}
}

//Pass by reference
void min2(int &a, int &b)
{
	if(a > b)
	{
		int temp = b; 
		b = a;
		a = temp;
	}	
}
