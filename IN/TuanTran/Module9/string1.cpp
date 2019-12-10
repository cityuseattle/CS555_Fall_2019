#include <iostream>
#include <string>

using namespace std;

/*
1. assignment

int main()
{
    // examples of assignment
    string teststr1 = "This is a string";
    string teststr2("This is a string");
    string name(8, 'x'); // repeating 8 times of the char 'x'
    string char22("22");
    string singlechar = " ";    

    return 0;
}
*/

/*
2. how they are used in the code
   discuss about the final output
    NULL vs no-NULL

int main()
{
    string myStr;
    cout << "Enter your string : ";
    cin >> myStr;
    cout << "string is : " << myStr;

    char myStrArray[10];
    char *myStrArray2 = new char [10];

    cout << "Enter your string : ";
    cin >> myStrArray2;
    cout << "string is : " << myStrArray;
    delete [] myStrArray2;

    // QUESTION1. What is the difference in the output message
    //            when using string vs. character array?

    return 0;
}
*/

/*
3. introduction to some of same functions between char array (c-style) vs. string

#include <cstring>

int main()
{
    string myStr1, myStr2;
    char myCharStr1[10], myCharStr2[10];

    myStr1 = "Test";
    myStr2 = "Test";

    cout << myStr1 << " " << myStr2 << endl;

    strcpy(myCharStr1, "Test"); // myCharStr1 = "Test"?
    strcpy(myCharStr2, "Test");

    cout << myCharStr1 << " " << myCharStr2 << endl;

    if(myStr1 == myStr2)
    {
        cout << "Same strings" << endl;
    }
    
    if(!strcmp(myCharStr1, myCharStr2)) //myCharStr1 == myCharStr2 ?
    {
        cout << "Same Char strings" << endl;
    }
    return 0;
}
*/

/*
4. built-in methods
    // input functions
    getline();
    push_back();
    pop_back();
    // capacity functions
    capacity();
    resize();
    length();
    shrink_to_fit();
    // iterator functions
    begin()/end();
    rbegin()/rend();
    // manipulating functions
    copy();
    swap();
*/
char pop_back(string &in)
{
    return in[in.size()-1]; // getting the last element
}
int main()
{
    string myStr;
    cout << "Enter your string : ";

    // Input Functions
    // getline(istream, string) to store a stream of characters as entered by the user in the object memory.
    getline(cin, myStr); // == cin >> myStr;
    cout << "string is : " << myStr << endl;
    // at(0 .. n-1) to retrieve an character located at the index of the string object
    cout << "first letter : " << myStr.at(0) << endl; // == myStr[0] 
    // size of the string object
    cout << "length of string : " << myStr.length() << endl; // == size()
    // push_back(char) to append a character at the end of the string object
    myStr.push_back('!');
    cout << "push_back string is : " << myStr << endl;
    // append(string) to concatenate a string to the string object
    myStr.append(" is entered");
    cout << "appended string is : " << myStr << endl;
    // pop_back() to remove the last character of the string object
    cout << "[" << pop_back(myStr) << "] has been popped." << endl;    
    myStr.pop_back(); // not returning anything
    cout << "pop_back string is : " << myStr << endl;

    cout << endl;
    cout << endl;

    // Capacity Functions
    // capacity() returns the capacity allocated to the string, which can be qual to or 
    // more than the side of the string. Addiional space is allocated so that when 
    // the new characters are added to the string, the operations can be done efficiently.
    string myStr2 = "capacity() returns the capacity allocated to the string"
                    ", which can be qual to or more than the side of the string.";
    cout << "-first string is " << myStr2 << endl;
    cout << "-the length is " << myStr2.length() << endl;
    cout << "-the capacity is " << myStr2.capacity() << endl;

    // resize() adjusts the capacity of string object
    myStr2.resize(100, 'x'); // if resized to a larger size, 'x' padding is done for the leftover spaces
    cout << "-after resize() string is " << myStr2 << endl;
    cout << "-the length after resize() is " << myStr2.length() << endl;
    cout << "-the capacity after resize() is " << myStr2.capacity() << endl;

    // shrink_to_fit() requests the string to reduce its capacity to fit its size.
    myStr2.shrink_to_fit(); // note: if resized to a larger size, then nothing to shrink to fit works only it got shrunk
    cout << "-after fit() string is " << myStr2 << endl;
    cout << "-the length after fit() is " << myStr2.length() << endl;
    cout << "-the capacity after fit() is " << myStr2.capacity() << endl;


    cout << endl;
    cout << endl;
    
    // Iterator Functions
    // begin()/end() returns an iterator to beginning/end of the string
    // QUESTION2: Does "it < myStr2.end()" make sense for iteration? Why or Why not?
    string::iterator it; //     V--- make sense?
    for(it = myStr2.begin(); it < myStr2.end(); it++) 
    {
        cout << *it << ' ';
    }
    // rbeginning/rend() returns a reverse iterator pointing at the end/beginning of string
    cout << endl;
    cout << endl;
    string::reverse_iterator rit;
    for(rit = myStr2.rbegin(); rit != myStr2.rend(); rit++)
    {
        cout << *rit << ' ';
    }

    cout << endl;
    cout << endl;    
    
    // Manipulating Functions
    // copy("char array", len, pos) copies the substring of the string object to the 
    // target character array by the amount of len starting at pos
    char myCharStr[50];
    myStr2.copy(myCharStr, 50, 0); // QUESTION3: What is wrong with this code?
    cout << "copied string is " << myCharStr << endl;

    // A.swap(B) simply exchanges between A and B strings
    string myStr3 = "this is a test string";
    cout << "A = " << myStr2 << endl;
    cout << "B = " << myStr3 << endl;    
    myStr2.swap(myStr3); // A.swap(B)
    cout << "swapped ..." << endl;
    cout << "A = " << myStr2 << endl;
    cout << "B = " << myStr3 << endl;    

    return 0;
}

