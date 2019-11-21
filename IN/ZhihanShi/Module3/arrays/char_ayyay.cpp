#include <iostream>
using namespace std;

int main(){
    int r,i;
    char c;
    static const int MAX_SIZE =26;
    char letters[MAX_SIZE];
    for (i=0; MAX_SIZE> i ;i++){
        c = 'z' - i;
        letters[i] = c;
        cout << letters[i] << endl;
    }
}

