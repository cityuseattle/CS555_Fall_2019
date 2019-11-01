#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main(){
    int i,j;
    srand( (unsigned)time(NULL));
    for (i = 0; i < 5; i++){
        j = sqrt((rand() % 20)+1);
        cout << "Random Number: " << j<<endl;
    }
    return 0;
}
