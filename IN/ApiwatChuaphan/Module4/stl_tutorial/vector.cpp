#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // created a vector to store int
    vector<int> vec;
    int i;
    // display the original size of vec
    cout << "vector size = " << vec.size() << endl;
    for (i = 1; i <= 10; i++)
    {
        vec.push_back(i);
    }
    cout << "extended vector size = " << vec.size() << endl;

    for (i = 0; i < 5; i++)
    {
        cout << "Value of vec [" << i << "] = " << vec[i] << endl;
    }

    vector<int>::iterator v = vec.begin();
    while (v != vec.end())
    {
        cout << "value of v = " << *v << endl;
        v++;
    }
    return 0;
}