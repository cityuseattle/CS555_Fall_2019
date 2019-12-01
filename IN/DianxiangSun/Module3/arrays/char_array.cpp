#include <iostream>
using namespace std;

int main() {
  int r,i;
  char c;
  static const int MAX_SIZE = 5;
  char letters[MAX_SIZE];  
  for (i=0; i<MAX_SIZE; i++) {
    c = 'z' + i;      
    letters[i] = c;   
    cout << letters[i] << endl; 
  }
}