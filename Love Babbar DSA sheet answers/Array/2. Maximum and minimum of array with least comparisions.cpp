// ---------------------------- Method 1 (Linear Search) ----------------------
// C++ program of above implementation
#include<iostream>
using namespace std;

// Pair struct is used to return
// two values from getMinMax()
struct Pair
{
	int min;
	int max;
};

struct Pair getMinMax(int arr[], int n)
{
	struct Pair minmax;	
	int i;
	
	// If there is only one element
	// then return it as min and max both
	if (n == 1)
	{
		minmax.max = arr[0];
		minmax.min = arr[0];	
		return minmax;
	}
	
	// If there are more than one elements,
	// then initialize min and max
	if (arr[0] > arr[1])
	{
		minmax.max = arr[0];
		minmax.min = arr[1];
	}
	else
	{
		minmax.max = arr[1];
		minmax.min = arr[0];
	}
	
	for(i = 2; i < n; i++)
	{
		if (arr[i] > minmax.max)	
			minmax.max = arr[i];
			
		else if (arr[i] < minmax.min)	
			minmax.min = arr[i];
	}
	return minmax;
}

// Driver code
int main()
{
	int arr[] = { 1000, 11, 445,
				1, 330, 3000 };
	int arr_size = 6;
	
	struct Pair minmax = getMinMax(arr, arr_size);
	
	cout << "Minimum element is "
		<< minmax.min << endl;
	cout << "Maximum element is "
		<< minmax.max;
		
	return 0;
}

// ------------------------------------------ Method 2 (Tournament Method) -----------------------------------------
// C++ program of above implementation
#include<iostream>
using namespace std;

// structure is used to return
// two values from minMax()
struct Pair
{
	int min;
	int max;
};

struct Pair getMinMax(int arr[], int low,
								int high)
{
	struct Pair minmax, mml, mmr;	
	int mid;
	
	// If there is only one element
	if (low == high)
	{
		minmax.max = arr[low];
		minmax.min = arr[low];	
		return minmax;
	}
	
	// If there are two elements
	if (high == low + 1)
	{
		if (arr[low] > arr[high])
		{
			minmax.max = arr[low];
			minmax.min = arr[high];
		}
		else
		{
			minmax.max = arr[high];
			minmax.min = arr[low];
		}
		return minmax;
	}
	
	// If there are more than 2 elements
	mid = (low + high) / 2;
	mml = getMinMax(arr, low, mid);
	mmr = getMinMax(arr, mid + 1, high);
	
	// Compare minimums of two parts
	if (mml.min < mmr.min)
		minmax.min = mml.min;
	else
		minmax.min = mmr.min;	
	
	// Compare maximums of two parts
	if (mml.max > mmr.max)
		minmax.max = mml.max;
	else
		minmax.max = mmr.max;	
	
	return minmax;
}

// Driver code
int main()
{
	int arr[] = { 1000, 11, 445,
				1, 330, 3000 };
	int arr_size = 6;
	
	struct Pair minmax = getMinMax(arr, 0,
							arr_size - 1);
							
	cout << "Minimum element is "
		<< minmax.min << endl;
	cout << "Maximum element is "
		<< minmax.max;
		
	return 0;
}

// ------------------------------------------------ Method 3(Comparision in Pairs) ----------------------------------
// C++ program of above implementation
#include<iostream>
using namespace std;

// Structure is used to return
// two values from minMax()
struct Pair
{
	int min;
	int max;
};

struct Pair getMinMax(int arr[], int n)
{
	struct Pair minmax;	
	int i;
	
	// If array has even number of elements
	// then initialize the first two elements
	// as minimum and maximum
	if (n % 2 == 0)
	{
		if (arr[0] > arr[1])	
		{
			minmax.max = arr[0];
			minmax.min = arr[1];
		}
		else
		{
			minmax.min = arr[0];
			minmax.max = arr[1];
		}
		
		// Set the starting index for loop
		i = 2;
	}
	
	// If array has odd number of elements
	// then initialize the first element as
	// minimum and maximum
	else
	{
		minmax.min = arr[0];
		minmax.max = arr[0];
		
		// Set the starting index for loop
		i = 1;
	}
	
	// In the while loop, pick elements in
	// pair and compare the pair with max
	// and min so far
	while (i < n - 1)
	{		
		if (arr[i] > arr[i + 1])		
		{
			if(arr[i] > minmax.max)	
				minmax.max = arr[i];
				
			if(arr[i + 1] < minmax.min)		
				minmax.min = arr[i + 1];	
		}
		else	
		{
			if (arr[i + 1] > minmax.max)	
				minmax.max = arr[i + 1];
				
			if (arr[i] < minmax.min)		
				minmax.min = arr[i];	
		}
		
		// Increment the index by 2 as
		// two elements are processed in loop
		i += 2;
	}		
	return minmax;
}

// Driver code
int main()
{
	int arr[] = { 1000, 11, 445,
				1, 330, 3000 };
	int arr_size = 6;
	
	Pair minmax = getMinMax(arr, arr_size);
	
	cout << "nMinimum element is "
		<< minmax.min << endl;
	cout << "nMaximum element is "
		<< minmax.max;
		
	return 0;
}

