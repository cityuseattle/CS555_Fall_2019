#include <iostream>
using namespace std;

int max(int num1, int num2){
    if (num1 > num2)
    return num1;
    else
    {
        return num2;
    }
}
void min(int num1, int num2){
    if (num1 > num2)
    cout <<"Min num is: " << num2 << endl;
    else
    {
        cout <<"Min num is: " << num1 << endl;
    }
}
int main(){
    int a = 100;
    int b = 200;
    int ret;
    ret = max(a,b);
    
    cout <<"Max value is : " << ret <<endl;
    min(a,b);
    return 0;
}