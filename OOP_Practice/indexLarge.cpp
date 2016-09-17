#include <iostream>
using namespace std;

void getIndexOfLargestValue(int *arr, int length);

int main()
{
	int arr[8] = {12, 3, 23, 1, 34, 57, 3, 12};
	int length = sizeof(arr) / sizeof(int);

	getIndexOfLargestValue(arr, length);
	return 0;
}

void getIndexOfLargestValue(int *arr, int length)
{
	int max = 0;
	int index;
	for(int i = 0; i < length; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}
	index += 1;
	cout << "Max element- " << max << endl;
	cout << "Index of Largest element- " << index << endl;
}
