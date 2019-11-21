#include<iostream>
using namespace std;

class Adder{
    public :
        Adder(int i=0)
        {
            total=i;
        }

        void addNumber(int number)
        {
            total+=number;
        }

        int getTotal()
        {
            return total;
        }

        private:
            int total;
};

int main()
{
    Adder a;
    
    a.addNumber(10);
    a.addNumber(20);
    a.addNumber(30);

    cout<<"Total "<<a.getTotal()<<endl;
    return 0;
}