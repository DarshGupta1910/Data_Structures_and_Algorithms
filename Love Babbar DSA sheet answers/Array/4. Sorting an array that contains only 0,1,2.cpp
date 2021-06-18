These are the folowing steps:
•	Maintain 3 variables low, high and mid
o	low - all elements before low are 0
o	mid - all elements between low and mid are 1
o	high - all elements after high are 2
•	Initially low, mid are set at 0 and high is at n-1
•	Now, we iterate mid from 0 to high, and for every element
o	if it is equal to 0, we swap it with element at low, and increement low and mid
o	else if it is equal to 2, we swap it with element at high, and decreement high
o	else we just increement mid (i.e element is equla to 1)
•	This method ensures partition, as low and high maintain elements according to their values, and then change their positions, ensuring all elements before low are lower than low_value and all elements after high are higher than high_value

// -------------------------------------- Solution using C++ ----------------------------------------
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int low = 0, high = n-1, mid = 0;
    
        while(mid <= high){
    
            if(a[mid]==0)
                swap(a[mid++], a[low++]);
           
            else if(a[mid]==1)
                 mid++;
    
            else
                swap(a[mid], a[high--]);
        }
    }
};

// ----------------------------------------- Solution using C ----------------------------------------
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort012(int a[], int n)
{
    int low = 0, high = n-1, mid = 0;

    while(mid <= high){

        if(a[mid]==0)
            swap(&a[mid++], &a[low++]);
       
        else if(a[mid]==1)
            mid++;

        else
            swap(&a[mid], &a[high--]);
    }
}
// ---------------------------------------------------------------------------------------------------
