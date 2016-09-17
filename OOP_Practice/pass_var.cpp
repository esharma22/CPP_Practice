//Passing variables by value, by reference and by address
#include <iostream>
using namespace std;

//Passing by value
//Can't alter value of the parameter passed
//Creates a copy of the parameter passed by main() in y
void foo1(int y)
{
	cout << y << endl;
	y = y + 1;
	cout << y << endl;
}

//Passing by reference
//Can alter value of the parameter passed
//No copy created and no need for a return statement
//Use const if don't want to change value of parameter(read-only)	
//Use Pass-by-reference when passing structs or classes
void foo2(int &y)
{
	y = y + 1;
}

//Passing by address
//Can alter value of the parameter passed
//No copy created since address of variable is passed
//Use this when passing pointer values
void foo3(int *y)
{
	*y = 6;
}

//Another Passing by address example
//If a null pointer is passed, then the program will crash
//Best practice is to check for null pointer first
void printArray(int *array, int length)
{
	if(!array)
	{
		return;
	}

	for(int i = 0; i < length; i++)
	{
		cout << array[i] << "\t";
	}
}

//Another Passing by address anomaly
//When a pointer in main is passed by address to the function, the address pointed to by the main-pointer
//is copied in func-pointer, so basically it becomes passed by value
void foo3_1(int *y)
{
	//The value of y is changing, not the thing y is pointing to
	y = nullptr;
}

//Another Passing by address anomaly
//It is the same as foo3_1, the difference is we are changing the value at the address pointed by y
//Hence, change in value will take place
void foo3_2(int *y)
{
	//The value pointed to y is being changed
	*y = 3;
}

int main()
{
	int x = 5;
	int a = 2;
	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr = &x;
	int *fun = &a;
	foo1(x);

	cout << a << endl;
	foo2(a);
	cout << a << endl;

	cout << x << endl;
	foo3(&x);
	cout << x << endl;

	printArray(arr, 5);	//When arr is passed, it turns into a pointer to the address of the first element
								//Hence, no need to type *arr

	cout << *ptr << endl;
	foo3_1(ptr);
	if(ptr)
		cout << *ptr << endl;
	else
		cout << "Null pointer" << endl;

	cout << *fun << endl;
	foo3_2(fun);
	if(fun)
		cout << *fun << endl;
	else
		cout << "Null pointer" << endl;
	return 0;
}
