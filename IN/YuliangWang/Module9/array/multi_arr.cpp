#include <iostream>
using namespace std;

#define WIDTH 3
#define HEIGHT 5

int jimmy[WIDTH][HEIGHT];
int n,m;

int main()
{
    for( n = 0; n < WIDTH; n++)
    {
        for(m = 0; m < HEIGHT; m++)
        {
            jimmy[n][m]=(n+1)*(m+1);
            cout<< jimmy[n][m]<<"\t";
        }
        cout<<endl;
    }
}