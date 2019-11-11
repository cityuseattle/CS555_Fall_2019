#include<iostream>
using namespace std;


class printData
{
     public:

     void Print(int i)
     {
        cout<<"Printing integer:" << i << endl;
     }

     void Print(double f)
     {
        cout<<"Printing float:" << f << endl;

     }

     void Print(char* c)
     {
         cout<<"Printing character:" << c << endl;
     }

};

int main(void)
{

    printData pd;
    pd.Print(5);  //function call for printing integer
    pd.Print(500.263);   //function call for printing float
    char* str1 = "Hello C++";  //function call for printing string
    pd.Print(str1);
    return 1;

}