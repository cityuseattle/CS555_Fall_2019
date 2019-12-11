#include<iostream>
using namespace std;

#define WIDTH 5 //Width=5
#define HEIGHT 3 //height=3

int jimmy[HEIGHT][WIDTH]; //Two- dimension int array
int n,m; 

//main function as a user
int main()
{
    for(n=0;n<HEIGHT;n++)
    {
        for(m=0;m<WIDTH;m++)
        {
            jimmy[n][m]=(n+1)*(m+1);
            cout<<jimmy[n][m]<<"\t";
        }
        cout<<endl;
    }
}

