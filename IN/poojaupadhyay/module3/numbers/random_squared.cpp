#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    int i, j;

    srand((unsigned) time(NULL));
    
    for(int i = 0; i < 5 ; i++)
    {

        j = (rand() % 20 ) +1; 

        cout << " Random NUmber : " << pow(j,2) << endl;
    }

    return 0;

}

    

    