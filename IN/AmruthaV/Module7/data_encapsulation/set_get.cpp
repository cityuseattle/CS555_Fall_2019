  
#include<iostream>
using namespace std;

class Encapsaulation
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
    Encapsaulation obj;
    obj.set(5);
    cout<<obj.get()<<endl;
    return 0;
}