#include <iostream>
using namespace std;

int main(){
    int r,i;
    char c;
    static const int MAX_SIZE = 5;
    char letters[MAX_SIZE]; // initialize char array w/ MAX_SIZE
    for (i=0; i<MAX_SIZE;i++){
        c = 'a' + i;
        letters[i] = c;
        cout << letters[i] << endl;
    }

    // Challenge
    cout << "Challenge Accepted!" << endl;
    int startIndex = 25;
    for (i=startIndex; i< startIndex + MAX_SIZE;i++){
        c = 'a' + i;
        letters[i] = c;
        cout << letters[i] << endl;
    }
}