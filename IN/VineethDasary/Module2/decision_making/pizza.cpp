#include<iostream>
#include<string>
using namespace std;

int main() {
    bool withPineapple = false;
    string response;
    response = (withPineapple) ? "I love it!" : "I dislike it!";
    cout << response << endl;
}