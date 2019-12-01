#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    int len;

    // concatenates str1 and str2
    strcat(str1, str2);
    cout << "strcat(str1, str2): " << str1 << endl;
    cout << "str(str1): " << strlen(str1) << endl;

    return 0;
}