#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str1[11]="Hello";
    char str2[11]="World";
    strcat(str1, str2);
    int len= strlen(str1);
    cout <<"strcat (str1, str2): " <<str1 <<endl;
    cout<<"strlen(str1) :"<<len<<"\n";
    return 0;
}