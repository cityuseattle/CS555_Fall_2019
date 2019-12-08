#include <iostream>
using namespace std;

int main(){
    char c;
    static const int max_size=5;
    char letters[max_size];

    for(int i=0;i<max_size;++i){
        c='a'+i+25;
        letters[i]=c;
        cout<<letters[i]<<endl;
    }
}