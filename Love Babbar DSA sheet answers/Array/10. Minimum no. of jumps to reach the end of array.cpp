/* This is a O(n) solution.

We will keep 3 variables:

jumps =  jumps taken, this will be our answer
maxrange = maximum range upto which we can jump
steps = to store steps that we can take for a particular jump
Think of a solution on basis of these variables. 

Complete Solution:

if n <= 1, then return 0, because that is the destination
If arr[0] == 0 then return -1 as answer (no jumps are possible)
Now, Initialize maxrange and steps with arr[0], and jumps with 1 (as 1 jump will be required)
Now, starting iteration from index 1, the above values are updated as follows:
First we test whether we have reached the end of the array, in that case we just need to return the jump variable
if (i == arr.length - 1) return jump;
Next we update the maxrange. This is equal to the maximum of maxrange and i+arr[i](the number of steps we can take from the current position).
maxrange = max(maxrange,i+arr[i]);
We used up a step to get to the current index, so steps has to be decreased.
step--;
If no more steps are remaining (i.e. steps=0, then we must have used a jump. Therefore increase jump. Since we know that it is possible to reach maxrange, we again initialize the steps to the number of steps to reach maxReach from position i. But before re-initializing step, we also check whether a step is becoming zero or negative. In this case, It is not possible to reach further.
if (step == 0) {
    jump++;
    if(i>=maxReach)
       return -1;
    step = maxReach - i;
}
Print the returned value

*/

// Returns minimum number of jumps to reach arr[n-1] from arr[0] 

class Solution{
  public:
    int minJumps(int arr[], int n) 
    { 
          
        // The number of jumps needed to reach the starting index is 0 
        if (n <= 1) 
            return 0; 
      
        // Return -1 if not possible to jump 
        if (arr[0] == 0) 
            return -1; 
      
        // initialization 
        int maxReach = arr[0];  // stores all time the maximal reachable index in the array. 
        int step = arr[0];      // stores the number of steps we can still take 
        int jump =1;//stores the number of jumps necessary to reach that maximal reachable position. 
      
        // Start traversing array 
        int i=1; 
        for (i = 1; i < n; i++) 
        { 
            // Check if we have reached the end of the array 
            if (i == n-1) 
                return jump; 
      
            // updating maxReach 
            maxReach = max(maxReach, i+arr[i]); 
      
            // we use a step to get to the current index 
            step--; 
      
            // If no further steps left 
            if (step == 0) 
            { 
                // we must have used a jump 
                jump++; 
      
                // Check if the current index/position or lesser index 
                // is the maximum reach point from the previous indexes 
                if(i >= maxReach) 
                    return -1; 
      
                // re-initialize the steps to the amount 
                // of steps to reach maxReach from position i. 
                step = maxReach - i; 
            } 
        } 
      
        return -1; 
    }
};
