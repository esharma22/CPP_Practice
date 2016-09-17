#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void selectionSort(int *arr, int length);

int main()
{
	int arr[6];
	srand(time(0));

	for(int i = 0; i < 6; i++)
	{
		arr[i] = rand() % 100;
	}

	cout << "Input array is:" << endl;
	for(int j = 0; j < 6; j++)
	{
		cout << arr[j] << '\t';
	}
	cout << endl;
	selectionSort(arr, 6);
	return 0;
}

void selectionSort(int *arr, int length)
{
	for(int start = 0; start < length; start++)
	{
		int smallestInd = start;
		for(int current = start + 1; current < length; current++)
		{
			if(arr[current] < arr[smallestInd])
			{
				smallestInd = current;
			}
		}
		int temp = arr[start];
		arr[start] = arr[smallestInd];
		arr[smallestInd] = temp;
	}

	cout << "Sorted array is:" << endl;
	for(int i = 0; i < length; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}
