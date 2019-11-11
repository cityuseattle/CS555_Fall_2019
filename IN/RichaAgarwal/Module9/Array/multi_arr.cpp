#include<iostream>
using namespace std;

#define WIDTH 5
#define HEIGHT 3

int richa [HEIGHT][WIDTH];
int n, m;

int main ()
{
    for (n=0; n < HEIGHT; n++)
    {
        for(m=0; m<WIDTH; m++)
        {
            richa[n][m] = (n + 1)*(m + 1);
            cout << richa[n][m] << "\t";
        }
        cout << endl;
    }
}


