#include "iostream"
#include "cstring"
using namespace std;


int main() {
  int len = 10;
  char str1[len] = "Hello";
  char str2[len] = "World";

  strcat(str1, str2);

  cout << "strcat(str1, str2): " << str1 << endl;
  cout << "strlen(str1): " << strlen(str1) << endl;
  return 0;
}