#include <iostream>
#include <vector>

using namespace std;

int main(){
    // create a vector to store int
    vector<int> vec;
    int i;
    int count = 5;

    cout << "vector size = " << vec.size() << endl;

    cout << "extended vector size = " << count << endl;

    for (i = 0; i < 5; i++)
    {
        vec.push_back(i);
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }

    vector<int>::iterator v = vec.begin();
    while(v != vec.end()){
        cout << "value of v = " << *v << endl;
        v++;
    }    

    return 0;
}