#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool withPineapple = true;//modify the bool parameter to love pizza
    string responese;
    responese = (withPineapple) ? "I love it!" : "I hate it!";
    cout << responese << endl;
}