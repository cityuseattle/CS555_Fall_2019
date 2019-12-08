#include <iostream>
#include <cstring>

using namespace std;

int main () {
    char str1[10] = "Hello";
    char str2[10] = "World";

    //concatenates str1 and str2
    strcat( str1, str2);
    cout << "strcat(str1, str2): " << str1 << endl;

    int len;
    cout << "string length" << strlen(str1) << endl;

    return 0;
}