#include <iostream>
using namespace std;

class Encapsulation{
    private:
    //data hidden from outside world
    int x;

    public:
    //function to set value of var x
    void set (int a){
        x = a;
    }

    //function to return value of var x
    int get()
    {
        return x;
    }
};

int main(){
    Encapsulation obj;

    obj.set(5);
    cout << obj.get() << endl;

    return 0;
}