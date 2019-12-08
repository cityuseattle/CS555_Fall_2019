#include <iostream>
#include <vector>
using namespace std;

int main() {

    //create a vector to store int
    vector<int> vec;
    int i;

    //display the digital size of vec
    cout << "Vector size = " << vec.size() << endl;

    for (i = 0; i < 5; i++) {
        vec.push_back(i);
    }

    cout << "Vector extended size = " << vec.size() << endl;

    //access 5 values from the vector
    for(i = 0; i < 5; i++) {
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }

    //use iterator to access the values
    vector<int>::iterator v = vec.begin();
    while( v != vec.end()) {
        cout << "value of v = " << *v << endl;
        v++;
    }

    return 0;
}