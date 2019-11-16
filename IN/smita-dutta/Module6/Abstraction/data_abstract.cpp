#include <iostream>
using namespace std;

class Adder
{

    public:
    Adder( int i=0)
    {  
        total=i;

    }
    
    //interface to outside world
    void AddNum(int number)
    {
        total+=number;
    }
    
    //interface to outside world
    int GetTotal()
    { 
        return total;

    }
    private:

    //hidden data from outside world
     int total;
};

int main()
{
    Adder a;
    a.AddNum(10);
    a.AddNum(20);
    a.AddNum(30);
    cout<< "Total "<<a.GetTotal()<<endl;
}
