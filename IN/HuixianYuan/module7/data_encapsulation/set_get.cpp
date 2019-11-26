#include <iostream>
using namespace std;

class encapsulation{
    private:
    int x;

    public:
    void set(int a){
        x=a;
    }
    int get(){
        return x;
    }
};

int main(){
    encapsulation obj;

    obj.set(5);
    cout<<obj.get()<<endl;

    return 0;
}