#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[10] = "Hello";
    char str2[10] = "World";
    int len;
    strcat (str1,str2);
    len = strlen(str1);
    cout << " startcat(str1, str2): " << str1 << endl;
    cout << " strlen(str1) : " << len << endl;
}