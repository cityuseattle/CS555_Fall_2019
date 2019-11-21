#include <iostream>
using namespace std;

//first name space
namespace first_space{
    void func(){
        cout << "Inside fisrt_space" << endl;
    }
}

//second name space
namespace second_space{
    void func(){
        cout << "Inside second_space" << endl;
    }
}

using namespace first_space;
int main(){
    // //calls func from fisrt namespace
    // first_space::func();

    // //Calls fucn from second namespace
    // second_space::func();
    func();
    return 0;
}