#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec;
    int i ;


    cout << "vector size: " << vec.size()<<endl;
    for(i=0;i<5;i++)
    {
        vec.push_back(i);
        cout<< "value of vec ["<< i <<"] = "<< vec[i]<< endl;
    
    }
   cout << "expended vector size: " << vec.size()<<endl;
   vector<int>::iterator V = vec.begin();
    while(V != vec.end())
    {
        cout<<"value of v = "<< *V << endl;
        V++;
    }

    return 0;
}