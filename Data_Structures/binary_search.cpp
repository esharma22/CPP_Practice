#include <iostream>
using namespace std;

int binarySearch(int *arr, int target, int min, int max);

int main()
{
	int array[] = { 3, 6, 8, 12, 14, 17, 20, 21, 26, 32, 36, 37, 42, 44, 48 };
 
   const int numTestValues = 9;
    
	int testValues[numTestValues] = { 0, 3, 12, 13, 22, 26, 43, 44, 49 };
    
	int expectedValues[numTestValues] = { -1, 0, 3, -1, -1, 8, -1, 13, -1 };
 
   for (int count=0; count < numTestValues; ++count)
   {
      int index = binarySearch(array, testValues[count], 0, 14);
        // If it matches our expected value, then great!
      if (index == expectedValues[count])
            std::cout << "test value " << testValues[count] << " passed!\n";
      else // otherwise, our binarySearch() function must be broken
            std::cout << "test value " << testValues[count] << " failed.  There's something wrong with your code!\n";
   }	
	return 0;
}

int binarySearch(int *arr, int target, int min, int max)
{
	while(min <= max)
	{
		int midpoint = (max - min) / 2;

		if(target == arr[midpoint])
		{
			return midpoint;
		}
	
		else if(target < arr[midpoint])
		{
			max = midpoint - 1;
		}
		else if(target > arr[midpoint])
		{
			min = midpoint + 1;
		}
	}
	return -1;
}

