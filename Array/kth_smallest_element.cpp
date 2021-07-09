class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
    
        unordered_set<int>us;
        
        for(int i = l; i <= r; i++)
            us.insert(arr[i]);
        
        for(auto i = us.begin(); i != us.end(); i++)
            
    }
};
