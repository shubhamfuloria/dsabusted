// Q. https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
void rotate(int arr[], int n)
{
    int temp = arr[n - 1];
    
    int i = n - 1;
    
    while(i > 0)
    {
        arr[i] = arr[i - 1];
        i--;
    }
    arr[0] = temp;    
}
