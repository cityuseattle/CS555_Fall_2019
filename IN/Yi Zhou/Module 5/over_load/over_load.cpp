#include <iostream>
using namespace std;

class printData{
    public:
        void print(int i)
        {
            cout<<"pringting int:"<<i<<endl;
        }

        void print(double f)
        {
            cout<<"printing float : "<<f<<endl;
        }

        void print(char * c)
        {
            cout<<"Pringting char *"<<c<<endl;
        }

};


int main()
{
    printData pd;
    
    pd.print(5);
    pd.print(500.623);

    char c[]={"Hello World ++"};
    pd.print(c);
}