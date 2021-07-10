void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort012(int a[], int n)
{
    int low = 0, high = n - 1;
    int mid = 0;
    
    while(mid <= high)
    {
        switch(a[mid])
        {
            case 0: 
                swap(a[low++], a[mid++]);
                break;
            
            case 1:
                mid++;
                break;
            
            case 2:
                swap(a[high--], a[mid]);
                break;
        }
    }
}
    
