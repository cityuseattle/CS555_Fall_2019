#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //create a vector to store int
    vector<int> vec;
    int i = 0;

    //display the original size of vector
    cout << "vector size = " << vec.size() << endl;


    //access 5 values from the vector
    for (i = 0; i < 5; i++){
        vec.push_back(i);
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }
    cout << "extended vector size = " << vec.size() << endl;

    //use iterator to acess the values
    vector<int>::iterator v = vec.begin();
    while (v != vec.end()){
        cout << "value of v = " << *v << endl;
        v++;
    }

    return 0;
}