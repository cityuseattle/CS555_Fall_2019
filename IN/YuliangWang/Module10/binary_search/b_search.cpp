#include <iostream>
using namespace std;

int binarySearch(int arr[], int l,int r, int t)
{
    while(l<=r)
    {
        int m = l + (r-l)/2;
        if(arr[m]==t)
        {
            return m ;
        }
        else if(arr[m]<=t)
        {
            l= m+1;
        }
        else
        {
            r = m -1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,3,4,7,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch(arr, 0, n, 6);
    (result == -1) ? cout<<"The target number is not in array" : 
    cout<<"The index of target number is: "<<result<<endl;
    return 0;
}