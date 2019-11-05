#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[10]="Hello";
    char str2[10]="World";

    strcat(str1,str2);

    cout<<"stract(str1,str2):"<<str1<<endl;

    cout<<"str1 length:"<<strlen(str1);

    return 0;
    
}