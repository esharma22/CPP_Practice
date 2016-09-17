#include <iostream>
using namespace std;

const int& getElement(const int *arr, int index);

int main()
{
	int arr[8] = {1, 34, 12, 54, 0, 356, 12, 53};
	int element;
	element = getElement(arr, 5);

	cout << "Element at index 5 is- " << element << endl;

	return 0;
}

const int& getElement(const int *arr, int index)
{
	static int element;
	for(int i = 0; i < index; i++)
	{
		element = arr[i];
	}
	return element;
}
