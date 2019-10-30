#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int i;
    double j;

    srand((unsigned)time(NULL));
    for(i=0;i<5;i++){
        j=(rand()%20)+1;
        cout<<"random number: "<<j<<endl;
        cout<<"pow(random number, 2): "<<pow(j,2)<<endl;
        cout<<"squart root of random number: "<<sqrt(j)<<endl;
        cout<<"floor the random number: "<<floor(j)<<endl;
        cout<<endl;
    }
}