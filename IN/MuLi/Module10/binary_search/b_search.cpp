#include <iostream>
using namespace std;

//A iterative binary search function. It retruns
//location of x in given array arr[l..r] if presents
//otherwise -1

int binarySearch(int arr[], int l, int r, int x)
{
    while(1 <= r){
        int m = l + (r-l) / 2;
         
         //check if x is present at mid
        if(arr[m] == x)
          return m;
        //if x greater, ignore left half
        if (arr[m] < x)
          l = m + 1;
         //if x is smaller; ignore right half
        else
          r = m - 1;

    }

    //if we reach here , then element was not present

    return -1;
}

int main(void)
{
    int arr[] = {2,3,4,10,40};
    int x = 10;
    int n = sizeof(arr) /sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
      : cout << "Element is present at index " << result;
    cout << endl;
    return 0;
}