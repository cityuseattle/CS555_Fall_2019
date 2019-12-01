#include <iostream>
#include <cstring>

using namespace std;

int main () {
  char str1[10] = "Hello";
  char str2[10] = "World";
  int  len;

  // concatenates str1 and str2
  strcat( str1, str2);
  cout << "strcat( str1, str2): " << str1 << endl;

  // total lenghth of str1 after concatenation
  len = strlen(str1);
  cout << "strlen(str1) : " << len << endl;

  return 0;
}