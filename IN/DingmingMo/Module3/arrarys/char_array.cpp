#include <iostream>
using namespace std;

int main(){
    int r,i;
    char c;
    static const int MAX_SIZE = 5;
    char letters[MAX_SIZE]; // initiate char array w/ MAX_SIZE
    for(i=0; i<MAX_SIZE; i++){
        c = 'z' + i;  // convert to a character from a-z, modify to z instead of a
        letters[i] = c; // update the array
        cout << letters[i] << endl; // prints element at index 1
    }
}