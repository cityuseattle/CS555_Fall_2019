#include<iostream>
using namespace std;
#define WIDHT 5;
#define HEIGHT 3;
int jimmy [HEIGHT] [WIDHT];
int n,m;

int main()
{
    for(n =0 ; n < HEIGHT ; n++)
    {
       for(m =0; m < WIDHT; m++)
       {
           jimmy[n][m] = (n+1) * (m+1);
           cout << jimmy[n][m]<< "\t";
       }

       cout << endl;
    }
}