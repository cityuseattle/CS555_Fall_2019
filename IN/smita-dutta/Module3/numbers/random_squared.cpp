# include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
     int i,j;

     // set the seed
     srand((unsigned) time (NULL));

     for(int i=0; i<5; i++)   //
     {
         j=(rand() % 20) +1;
         cout<<"Random number : " << pow( j,2) <<endl;
         cout<<"Random number : " << floor(sqrt(j)) <<endl;
         
     }

   return 0;
}