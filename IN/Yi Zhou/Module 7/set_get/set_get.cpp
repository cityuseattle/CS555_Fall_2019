#include <iostream>
using namespace std;

class Encapsulation
{
private:
        int x;

public:
//set x value
    void set(int a)
    {
        x=a;
    }

//get public x value
    int get()
    {
        return x;
    }
};


//main function
int main()
{
    Encapsulation obj;

    obj.set(5);

    cout<<obj.get()<<endl;

    return 0;
}