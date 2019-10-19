#include <iostream>
using namespace std;

int main()
{
    int n=10;

    while(n>0)
    {
        if(n%2==0)
        {
            cout<<n<<" ,";
        }
        
        --n;
        
    }
    cout<<"liftoff! \n";
}