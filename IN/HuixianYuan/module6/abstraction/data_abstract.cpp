#include <iostream>
using namespace std;

class Adder{
    public:
    Adder(int i=0){
        total=i;
    }

    void addNum(int number){
        total+=number;
    }

    int getTotal(){
        return total;
    }

    private:
    int total;
};

int main(){
    Adder a;

    a.addNum(10);
    a.addNum(20);
    a.addNum(30);

    cout<<"total "<<a.getTotal()<<endl;
    return 0;
}