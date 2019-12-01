#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int i,j;
    srand((unsigned) time (NULL));

    for (int i=0;i<5;i++) //challenge
    {
        j=(rand()%20)+1;
        cout<<"Random Number :"<<sqrt(j)<<endl; // pow to sqrt
    }

    return 0;
    
}