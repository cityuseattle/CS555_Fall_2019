#include <iostream>
#include <string>
using namespace std;

int main(){
    bool withPineapple = false;
    bool topingPinapple = true;
    
    string response;
    string response2;
    
    response = (withPineapple) ? "I love it!" : "I hate it!";
    response2 = (topingPinapple)? "I love pineapples as a pizza topping" : "I hate pineapples as a pizza topping";
    
    cout << response << response2 <<endl;
}