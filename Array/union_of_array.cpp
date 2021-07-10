    //Q. https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1#
    
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        
        unordered_map<int, int>u_map;
        
        for(int i = 0; i < n; i++)
            u_map[a[i]]++;
            
        for(int j = 0; j < m; j++)
            u_map[b[j]]++;
            
        int counter = 0;
        for(auto i = u_map.begin(); i != u_map.end(); i++)
            if(i->second != 0)
                counter++;
            
        return counter;
    }
