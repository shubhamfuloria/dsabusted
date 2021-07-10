    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        //Q. https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#
        
        int f_sum = INT_MIN, c_sum = 0;
        
        for(int i = 0; i < n; i++)
        {   
            c_sum += arr[i];
            
            if(c_sum > f_sum)
                f_sum = c_sum;
                
            if(c_sum < 0)
                c_sum = 0;
        }
        return f_sum;
        
    }
