#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int i, j;
    //set the seed
    srand((unsigned)time(NULL));
    //generate 10 random numbers
    for (i = 0; i < 5; i++)//change the 10 to 5 to generate 5 random numbers
    {
        j = (rand()%20)+1;
        cout<<"Second power of random number: "<<pow(j,2)<<endl;
        cout<<"Square root of random number: "<<int(sqrt(j))<<endl;//the square root of the random number
    }
    return 0;
}