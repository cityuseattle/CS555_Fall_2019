#include<iostream>
using namespace std;
int main()
{
    int r, i;
    char c;
    static const int max_size = 5;
    char letters[max_size];

    for(int i = 0; i <max_size; i++)
    {
        c = 'z' + i;
        letters[i] = c; 
        cout << letters[i] << endl;
    }
}
