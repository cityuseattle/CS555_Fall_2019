#include <iostream>
using namespace std;

/**
 * This program takes in elements of an arry 
 * from the user, checks to see if an element is 
 * repeated and prints out only the non repeating elements
 * */

// function to find unique elements 
int uniquEle(int *arr, int len)
{
    cout << "\n Unique elements are: ";

    // Nested  for loop to iterate through array 
    for (int i = 0; i < len; i++)
    {
        // boolean to check 
        bool isUnique = true;
        for (int j = 0; j < len; j++)
        {
            // i! = j checks at a different index 
            if (arr[i] == arr[j] && i != j)
            {
                isUnique = false;
                break;
            }
        }
        // if element is not repeated prints the element 
        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}


int main()
{
    // Local variables 
    int len = 0;
    int arr[50];
    int count = 1;
    // user input for the array size
    cout << "Enter the array size :" << endl;
    cin >> len;
    // user input for elements of array 
    for (int i = 0; i < len; i++, count++)
    {
        cout << "Enter element " << count << ": ";
        cin >> arr[i];
    }
    // function call 
    uniquEle(arr, len);

    return 0;
}