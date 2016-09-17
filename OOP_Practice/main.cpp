#include <iostream>
#include "io.h"
using namespace std;

int main()
{
	int x = readNum();
	int y = readNum();

	int sum = writeNum(x, y);
	cout << "Sum- " << sum << endl;

	return 0;
}


