#include <iostream>
using namespace std;

int main(){
    int firstvalue, secondvalue;
    int *mypointer;

    mypointer=&firstvalue;
    *mypointer=10;
    mypointer=&secondvalue;
    *mypointer=20;
    *mypointer+=secondvalue;
    cout<<"firstvalue is "<<firstvalue<<'\n';
    cout<<"secondvalur is "<<secondvalue<<'\n';
    return 0;
}