#include <iostream>
using namespace std;

int max(int num1, int num2);
int min(int num1, int num2);

int main(){
    int a=100;
    int b=200;
    int ret=max(a,b);
    int ret1=min(a,b);
    cout<<"max value is: "<<ret<<endl;
    cout<<"min value is: "<<ret1<<endl;
}

int max(int num1, int num2){
    int result;

    if(num1>num2){
        result=num1;
    }
    else
    {
        result=num2;
    }
    return result;
}

int min(int num1, int num2){
    int result1;

    if(num1<num2){
        result1=num1;
    }
    else
    {
        result1=num2;
    }
    return result1;
}