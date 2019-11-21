#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str1[10]="hello";
    char str2[10]="world";
    int len;
    strcat(str1,str2);
    len=strlen(str1);
    cout <<"strcat (str1, str2): " <<str1<<endl<<"str1 length is:  " << len;
    return 0;
}
