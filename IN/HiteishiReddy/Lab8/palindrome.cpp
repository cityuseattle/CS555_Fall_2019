#include <iostream>
using namespace std;

/*
 This program checks to see if a string is palindrom 
 */
int main()
{

    // Local variable declaration:
    string input;
    char ans;

    // do loop execution
    do
    {
        cout << "Enter a string: " << endl;
        cin >> input;

        int length = input.length();
        int i;

        // variable 
        string reverseStr = "";
        //simple for loop to interate and reverse string
        for (i = input.length() - 1; i >= 0; i--)
        {
            reverseStr = reverseStr + input[i];
        }
        // palindrome if entered string  and reverse are equal
        if (input == reverseStr)
            cout << "It is a palindrome " << endl;
        else
            cout << "It is not a palindrome " << endl;

        // gives user option to enter new string
        cout << " \n Do you want to enter another string? " << endl;
        cin >> ans;

    } while (ans == 'Y' || ans == 'y');
}