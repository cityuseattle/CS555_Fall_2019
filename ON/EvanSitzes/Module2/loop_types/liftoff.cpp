#include "iostream"
using namespace std;


int main() {
  int n = 10;

  while (n > 2) {
    cout << n << ", ";
    n -= 2;
  } 

  cout << "Liftoff!\n";

  return 0;
}