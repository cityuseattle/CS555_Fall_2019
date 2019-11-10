#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[10] = "Hello";
    char str2[10] = "World";

    int len = 0;  // variable for string length

    // concatenates str1 and str2
    strcat(str1, str2);
    cout << "strcat(str1, str2): " << str1 << endl;

    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;

    return 0;
}