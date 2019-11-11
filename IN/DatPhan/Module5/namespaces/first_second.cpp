#include <iostream>
using namespace std;

namespace first_space
{
void func()
{
    cout << "Inside first_space" << endl;
}
} // namespace first_space

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
    func();

    second_space::func();

    return 0;
}