#include <iostream>
using namespace std;

int main() {
    int r,i;
    char c;
    static const int MAX_SIZE = 5;
    char letters[MAX_SIZE];  //initialize char array w/MAX-SIZE
    for (i = 0; i < MAX_SIZE; i++){
        c = 'z' + i;  // convert to a character fron a-z
        letters[i] = c;  //update the array
        cout << letters[i] << endl; // prints elements at index i
    }
}