/*
This program reads an string prints whether or not it is a palindrome. 
A palindrome is a word or number that are the same even if read backwards.
This program will consider a set (both odd or even) of characters or numbers.
*/
#include <iostream>
#include<cstring>
#include<math.h>
using namespace std;

main() {
 char word [256]; // Stores the set of characters or numbers (limited by 256)
 int wordSize; // stores the size of the word array (that will be entered by the user) 
 int wordStart, wordEnd; // Auxiliary indexes for the word array that will be use to keep start and end positions on the loop
 bool palindrome=true;  // Flag to indicate if the word is a palidrome or not. In this code logic if the word is not a palidrome this flag will be set to false
      
 cout << "Enter a string: ";	  
 cin >> word;
       
 // Loop to find the size of word array and store it at wordSize
 for (wordSize=0; word[wordSize]!='\0'; wordSize++);
       
 // loop to go from start to end of the word array at the same time that is performe the reverse loop
 for (wordStart=0, wordEnd=wordSize-1; wordEnd>0 && word[wordStart] != '\0'; wordStart++, wordEnd--) {	    
     if (word[wordStart] != word[wordEnd]) // Compare the characters from the edges of the array
         palindrome=false;                 // If they are different, the string is not a palindrome. 
     	 break;
 }
       
 if (palindrome) // if the flag was not set to false in the loop above, word is a palindrome. Otherwise, it's not a palindrome.
     cout << "This string is a palindrome.";
 else 
     cout << "This string is NOT a palindrome.";
           
 return 0;
}