#include <iostream>
using namespace std;


// first namespace
namespace first_space {
    void func(){
        cout << "Inside first_space" << endl;
    }
}

//second namespace
namespace second_space {
    void func(){
        cout << "Inside second_space" << endl;
    }
}

int main(){
using namespace first_space;
func();
}