#include <iostream>
#include <string>
using namespace std;

int main() {
    bool withPineapple = true;
    string response;
    response = (withPineapple) ? "I love it!" : "i hate it!";
    cout << response << endl;
}