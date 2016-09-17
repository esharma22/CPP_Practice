#include <iostream>
#include <string.h>
using namespace std;

void sortNames(const string *arr, int length);

int main()
{
	int num;
	string name;

	cout << "How many names would you like to enter- ";
	cin >> num;

	string *names = new string[num];

	for(int i = 0; i < num; i++)
	{
		cout << "Name " << i+1 << "- ";
		cin >> name;
		names[i] = name;
	}
	sortNames(names, num);

	delete[] names;
	names = nullptr;
	return 0;
}

void sortNames(const string *arr, int length)
{
	for(int i = 0; i < length; i++)
	{
		int smallestInd = i;
		for(int j = i+1; j < length; j++)
		{
			if(strcmp(arr[j], arr[smallestInd]) < 0)
			{
				smallestInd = j;
			}
		}
		int temp = i;
		i = smallestInd;
		smallestInd = temp;
	}
	cout << "Sorted names are: " << endl;

	for(int i = 0; i < length; i++)
	{
		cout << arr[i] << endl;
	}
}
