#include <iostream>
#include <algorithm>
using namespace std;

void myprint(char &c)
{
    cout << c << " ";
}

int main()
{
    string sInput;
    // getting an input string from the console
    cout << "Enter your string: ";
    cin >> sInput;
    
    // 1. simple looping thru the string 
    for(string::size_type i = 0; i < sInput.size(); i++)
    {
        //cout << sInput[i] << " ";
    }

    // 2. using a range-based for loop
    for(char &c: sInput)
    //for(auto c: sInput)    // more convenient
    {
        cout << c << " ";   
    }

    // 3. using an iterator to access a sequence of characters or other sequence of data members, list, vector ...
    //    reason to use an iterator is to bring you closer to container(data) independence from operation(algorithm).
    //                                 to provide more flexibility over different types of data
    // cbegin() : returns a constant iterator pointing to the 1st character
    // cend()   : returns a constant iterator pointing to the last character
    //for(auto it = sInput.cbegin(); it != sInput.cend(); it++)    
    //for(auto it = sInput.begin(); it != sInput.end(); it++)    
    for(string::iterator it = sInput.begin(); it != sInput.end(); it++)    
    {
        //cout << *it << " ";
    }

    // 4. using for_each function (#include<algorithm>)
    //    for_each is a STL algorithm that takes a collection of elements (chars in this case)
    //    in the form of a begin and end iterator and a function (object) then applies the function 
    //    on each element of the collection.
    //    for_each (collection.begin(), collection.end(), yourfunction);
    //     where yourfunction operates on an item from the collection

    for_each(sInput.begin(), sInput.end(), myprint); 
    //for_each(sInput.begin(), sInput.end(), [] (char &c){ cout << c << " ";}); // lambda expression
    return 0;
}