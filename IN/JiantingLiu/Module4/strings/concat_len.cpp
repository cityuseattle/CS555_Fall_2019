#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str1[10] = "Hello";
    char str2[10] = "World";
    strcat(str1,str2);
    int len =  strlen(str1);

    cout << "strcat(str1, str2): "<< str1;
    cout<<"The length of str1 : "<<len;
    return 0;
}