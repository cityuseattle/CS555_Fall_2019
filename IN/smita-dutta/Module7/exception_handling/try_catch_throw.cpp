#include<iostream>
using namespace std;

double division( int a , int b)
{
    if(b==0)
    throw "Division by zero condition!" ;

    return a/b;
 
}

int main()
{
   int a=50;
   int b=0;
   double z= 0;

   try
   {
    z= division(a, b);
    cout<< z<<endl;

   }
   catch(const char * msg)
   {
       cerr<< msg << endl;
   }

   return 0;

}