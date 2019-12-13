#include "iostream"
using namespace std;

double division(int a, int b) {
  if (b == 0) {
    throw "Division by 0 condition!";
  }

  return a / b;
}

int main() {
  int x = 50;
  int y = 0;
  double z = 0;

  try {
    z = division(x, y);
  } catch (const char* msg) {
    cerr << msg << endl;
  }

  return 0;
}