#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    int i;

    cout << "Vector size =" <<vec.size()<<endl;


    for (i = 0; i<5;i++){
        vec.push_back(i);
        cout<< "value of vec [" << i <<"] = " << vec[i]<<endl;

    }

    cout << "Extended Vector size =" <<vec.size()<<endl;

    vector<int>::iterator v = vec.begin();
    while(v!=vec.end()){
        cout<<"value of v = "<<*v<<endl;
        v++;
    }


    return 0;
}