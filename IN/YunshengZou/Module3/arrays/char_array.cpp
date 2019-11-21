#include <iostream>
using namespace std;

int main()
{
    int r,j;
    char c;
    static const int MAX_SIZE=5;
    char letters[MAX_SIZE];
    for(int i=0; i<MAX_SIZE; i++)
    {
        c = 'z' + i;//change the 'a' to 'z' instead to start
        letters[i]=c;
        cout<<letters[i]<<endl;
    }
}