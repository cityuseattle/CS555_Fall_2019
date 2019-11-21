#include "iostream"
using namespace std;

class printData {
  public:
    void print(int i) {
      cout << "Pringing int: " << i << endl;
    }

    void print(double f) {
      cout << "Pringing float: " << f << endl;
    }

    void print(char* c) {
      cout << "Pringing character: " << c << endl;
    }
};

int main() {
  printData pd;

  pd.print(5);
  pd.print(500.263);
  pd.print("Hello C++");

  return 0;
}