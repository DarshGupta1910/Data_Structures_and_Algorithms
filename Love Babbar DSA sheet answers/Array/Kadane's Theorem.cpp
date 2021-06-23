// Use Kadane's Algorithm.

// The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array. And keep track of maximum sum contiguous segment among all positive segments.

// Each time we get a positive-sum compare it with max sum so far and update it.


class Solution{
    public:
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int a[], int n){
        
        long long maxh = 0, maxf = INT_MIN;
        
        //Iterating over the array.
        for(int i=0;i<n;i++) 
            {
                //Updating max sum till current index.
                maxh+=a[i];
                //Storing max sum so far by choosing maximum between max 
                //sum so far and max till current index.
                maxf=max(maxh,maxf); 
                
                //If max sum at current index is negative, we do not need to add
                //it to result so we update it to zero.
                if(maxh<0)
                    maxh=0;
    
            }
            //returning the result.
            return maxf;
        
    }
};
