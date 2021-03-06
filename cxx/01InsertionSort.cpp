// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> IntegerArray;
typedef const vector<int> CIntegerArray;

void InsertionSort(IntegerArray& arr)
{
	for (int i = 1; i < arr.size(); i++)
	{
		int key = arr[i];

		int j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = key;
	}

}

void printArray(CIntegerArray arr)
{
	for (auto val : arr)
		cout << val << " ";

	cout << endl;
}
int main()
{
	vector<int> arr = { 5,3,2,1,4 };

	InsertionSort(arr);
	printArray(arr);

    return 0;
}

