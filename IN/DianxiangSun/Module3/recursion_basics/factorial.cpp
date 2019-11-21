#include<iostream>
using namespace std;

unsigned long long int factorial(unsigned int i)
{
    if(i == 0) {
        return 1;
    }
    return i * factorial(i - 1);
}

int main() {
    int i = 12;
    cout << "Factorial of " << i <<" is " << factorial(i);
    cout << endl;
    return 0;
}