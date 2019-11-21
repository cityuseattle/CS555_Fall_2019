#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    int i;
    cout<<"vector size = "<<vec.size()<<endl;
    vec.resize(5);
    cout<<"The extended vector size = "<<vec.size()<<endl;
    for(i=0;i<5;i++){
        cout<<"value of vec ["<<i<<"] = "<<vec[i]<<endl;
        vec[i+1]=vec[i]+1;
    }
    vector<int>::iterator v = vec.begin();
    while(v !=vec.end()){
        cout<<"value of v = "<<*v<<endl;
        v++;
    }
    return 0;
}