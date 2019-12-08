#include <iostream>
#include <string>

using namespace std;


int main() {
    bool withPineapple = true;
    string response, check;

    cout << "Do you still hate Pineapple top? (y/n): ";
    cin >> check;
    if ((check == "y") || (check == "Y"))
      withPineapple = false;

    response = (withPineapple) ? "I love it!" : "I hate it!"; 
        
    cout << response << endl;
    
    return 0;
}