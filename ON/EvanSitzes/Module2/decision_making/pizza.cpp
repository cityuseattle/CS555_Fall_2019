#include "iostream"
#include "string"
using namespace std;


int main() {
  bool withPinapple = true;
  string response;
  response = (withPinapple) ? "I love it." : "I hate it";
  cout << response << endl;

  return 0;
}