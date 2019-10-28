#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int i, j;
    srand((unsigned)time(NULL));
    for (i = 0; i < 5; i++)
    {
        j = (rand() % 20) + 1;
        cout << " Random Number : " << pow(j, 2) << endl;
        cout << " Random Number : " << floor(sqrt(j)) << endl;
    }
    return 0;
}