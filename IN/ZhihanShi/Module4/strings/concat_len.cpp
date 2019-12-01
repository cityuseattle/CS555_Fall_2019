#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str1[10]="Hello";
    char str2[10]="world";
    int cont;
    strcat(str1,str2);
    cont = strlen(str1);
    cout << "strcat(str1,str2): " << str1 <<endl;
    cout << "strlen(str1):"<< cont <<endl;

    return 0;
}