#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[10] = "Hello";
    char str2[10] = "World";

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    cout << "Length of str1 = " << len1 << endl;
    cout << "Length of str2 = " << len2 << endl;
    if (len1 > len2)
        cout << "str1 is longer than str2";
    else if (len1 < len2)
        cout << "str2 is longer than str1";
    else
        cout << "str1 and str2 are of equal length";

    strcat(str1, str2);
    cout << "strcat(str1, str2): " << str1 << endl;
    cout << "strlen(str1, sr2) : " << str1 << endl;

    return 0;
}