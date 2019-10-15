#include "iostream"
using namespace std;

int g = 42;

int main() {
  int a, b;
  int c;

  a = 10;
  b = 20;
  c = a + b;

  cout << c << endl;

  int g = -1;
  cout << ::g << endl;

  return 0;
}