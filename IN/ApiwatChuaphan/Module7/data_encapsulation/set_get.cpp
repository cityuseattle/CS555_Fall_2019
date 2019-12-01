#include <iostream>
using namespace std;

class ENcapsulation
{
private:
    int x;

public:
    void set(int a)
    {
        x = a;
    }
    int get()
    {
        return x;
    }
};

int main()
{
    ENcapsulation obj;
    obj.set(5);
    cout << obj.get() << endl;

    return 0;
}