#include <iostream>
using namespace std;
#define HEIGHT 3
#define WIDTH 5
int jimmy[HEIGHT][WIDTH];
int n,m;

int main(){
    for(n=0;n<HEIGHT;n++){
        for(m=0;m<WIDTH;m++){
            jimmy[n][m]=(n+1)*(m+1);
            cout<<jimmy[n][m]<<"\t";
        }
        cout<<endl;
    }
}