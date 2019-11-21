#include <iostream>
using namespace std;

class Adder{
    public:
    Adder(int i=0){
        total=i;
    }

    void addnum(int num){
        total += num;
    }
    int gettotal(){
        return total;
    }
    private:
    int total;
};

int main(){
    Adder a;
    a.addnum(10);
    a.addnum(20);
    a.addnum(30);
    
    cout<<"Total:  "<<a.gettotal()<<endl;
}