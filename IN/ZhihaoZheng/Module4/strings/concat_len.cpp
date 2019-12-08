#include <iostream>
#include <cstring>

using namespace std;

int main () {
    char str1[10] = "HEllo";
    char str2[10] = "World";

    strcat ( str1 , str2 );
    strlen (str1);
    cout << "strcat (str1,str2):" << str1 << endl;
    cout << "length of str1: " << strlen(str1) << endl;
    return 0;
}