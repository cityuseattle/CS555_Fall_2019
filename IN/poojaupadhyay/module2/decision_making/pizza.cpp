#include <iostream>
using namespace std;
#include <string>


int main()
{
    bool withPineapple = true;
    string response;
    response = (withPineapple) ? " I love it!" : "I hate it!";
    cout << response << endl;
    return 0;

}