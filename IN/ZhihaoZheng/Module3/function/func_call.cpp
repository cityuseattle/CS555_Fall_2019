#include <iostream>
using namespace std;

int max( int num1, int num2 );
int min( int x, int y);

int main(){
    int a = 100;
    int b = 200;
    int ret;
    int c;

    ret = max(a,b);
    cout << "Max value is :" << ret << endl;

    c = min(a,b);
    cout << "Min value is :" << c << endl;
    return 0;
}

int min(int x, int y){
    int r;

    if (x<y)
        r = x;
    else
    {
        r = y;
    }
    
}
int max(int num1 ,int num2){
    int result;

    if (num1 >num2)
    result = num1;

else
{
    result = num2;
}
return result;
}