#include "iostream"
using namespace std;

#define NEWLINE '\n'

int main() {
  const int LENGTH = 10;
  const int WIDTH = 5;
  const char tab = '\t';
  int area;

  area = LENGTH * WIDTH;
  cout << "Area: " << NEWLINE << tab << area;

  return 0;
}