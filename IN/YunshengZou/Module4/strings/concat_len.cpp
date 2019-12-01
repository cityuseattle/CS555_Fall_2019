#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int len;//to store the length of str1
    char str1[10] = "Hello";
    char str2[10] = "World";

    //concatenates str1 and str2
    strcat(str1,str2);
    cout << "Stract(str1,str2): " << str1 << endl;
    cout<<"The length of str1 is: " << strlen(str1) << endl;

    return 0;
}