#include <iostream>
using namespace std;

// first namespace
namespace first_space
{
void func()
{
    cout << "Inside first_space " << endl;
}
} // namespace first_space

// second namespace
namespace second_space
{
void func()
{
    cout << "Inside second_space " << endl;
}
} // namespace second_space

using namespace first_space;

int main()
{
    // call func from first namespace
    //first_space::func();

    // call func from second namespace
    //second_space::func();

    func();

    return 0;
}