#include <iostream>
using namespace std;

namespace first_space {
    void func() {
        cout << "Inside first space." << endl;
    }
}

namespace second_space {
    void func() {
        cout << "Inside second space." << endl;
    }
}
using namespace first_space;
int main() {
    func();

    return 0;
}