#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int a = 5;

	int *p = (int *)malloc(sizeof(int));
	*p = 6;
	
	cout << "a- " << a << endl;
	cout << "p- " << *p << endl;

	free(p);
	
	cout << "p- " << *p << endl;

	return 0;
}
