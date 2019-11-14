#include <iostream>
using namespace std;

//first name space
namespace first_space {
    void func() {
        cout << "Inside first_space" << endl;
    }
}

// second namespace
namespace second_space {
    void func() {
        cout << "Inside second_space" << endl;
    }
}
using namespace first_space;
int main() {
  /*  // Calls function from first namespace
    first_space::func();

    // Calls function from second name space
    second_space::func();
    */
   func();
    return 0;
}