#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input_string, word;
    int count = 0;

    // Get user input
    cout << "Enter your string: ";
    getline(cin, input_string);

    stringstream words2(input_string);

    // Breakdown the stringstream into words
    // and count the total number of words
    while (words2 >> word)
    {
        count++;
    }

    cout << "Number of words: " << count << endl;
}