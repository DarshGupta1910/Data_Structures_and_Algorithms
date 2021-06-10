// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;


template <class T>
void Swap(T&a,T&b)      //Function Template
{
    T temp=a;
    a=b;
    b=temp;
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int i, j;
	for (i = 0; i < n-1; i++)	
	{
	// Last i elements are already in place
	for (j = 0; j < n-i-1; j++)
	{
		if (arr[j] > arr[j+1])
			Swap(arr[j], arr[j+1]);
	}
			
	}

	cout<<"Sorted array: \n";
	printArray(arr, n);
	return 0;
}
