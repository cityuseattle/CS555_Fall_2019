/*
This is a C++ program that prints all the non-repeated numbers in an array. Code accepts different number of elements.
For example:
  Array length: 10
  Array input: 2 5 3 2 4 5 3 6 7 3
  Output: Non-repeated numbers are: 7, 6, 4
For minimum time complexity (max efficience), it was used hash table.
The code will first run through the array to insert the elements into the hash table. If the element already exists, 
it will increase its count. Then, it will run through it for a second time to print the elements that have the count 
equal to 1 (non-repeatable).
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {

 int InputArray[] = { 2, 5, 3, 2, 4, 5, 3, 6, 7, 3 }; // Variable to store the input array (accepts different number of elements) 
 int InputArrayLenght = sizeof(InputArray) / sizeof(InputArray[0]); // // Variable to store the input array lenght 
 
 cout << "Non-repeated numbers are: ";

 // Create the hash table and insert all elements (and their counts) in it
 unordered_map<int, int> hTableMap; 
 for (int i = 0; i < InputArrayLenght; i++) 
     hTableMap[InputArray[i]]++; 
  
 // Run through the array again and to find and print the non-repeated elements (has the count equal to 1). 
 for (int i = 0; i < InputArrayLenght; i++) 
     if (hTableMap[InputArray[i]] == 1) 
         cout << InputArray[i] << " ";

 return 0;
}