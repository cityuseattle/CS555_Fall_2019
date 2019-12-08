#include "iostream"
using namespace std;

int max(int num1, int num2);

int main() {
  int a = 100;
  int b = 200;
  int ret;
  int ret2;
  
  ret = max(a, b);
  ret2 = min(a, b);

  cout << "Max value is : " << ret << endl;
  cout << "Min value is : " << ret2 << endl;

  return 0;
}

int max(int num1, int num2) {
  if (num1 > num2) {
    return num1;
  }

  return num2;
}

int min(int num1, int num2) {
  if (num1 < num2) {
    return num1;
  }

  return num2;
}