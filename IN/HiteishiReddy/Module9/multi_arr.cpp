#include <iostream>
using namespace std;

#define WIDTH 5
#define HEIGHT 3

int jimmey [HEIGHT][WIDTH];
int n, m;

int main(){
    for (n = 0; n < HEIGHT; n++)
    {
        for(m = 0; m<WIDTH; m++)
        {
            jimmey[n][m]=(n+1)*(m+1);
            cout << jimmey [n][m] << "\t";
        }
        cout << endl;
    }
}