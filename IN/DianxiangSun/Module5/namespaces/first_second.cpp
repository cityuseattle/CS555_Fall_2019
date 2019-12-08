#include <iostream>
using namespace std;

// first name space
namespace first_space
{
void func()
{
    cout << "Inside first_space" << endl;
}
} // namespace first_space

// second name space
namespace second_space
{
void func()
{
    cout << "Inside second_space" << endl;
}
} // namespace second_space
using namespace first_space;
int main()
{
    // Calls function from first name space.
    // first_space::func();
    func();
    // Calls function from second name space.
    // second_space::func();

    return 0;
}