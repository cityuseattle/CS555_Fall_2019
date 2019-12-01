#include <iostream>
using namespace std;

int main(){
    int A[]={-1, 2, 10, 16, 2};
    int m,n;
    sort(A, A+m);

    int B[]={10, 11, 6, 7, 3};
    sort(B,B+n);
    int target=22;

    void findTarget(){
        for(int i=0; i<A.length(); ++i){
            for(int j=0; j<B.length(); ++j){
                int sum =A[i]+b[j];
                result=int abs(sum-target);
                int min=20;
                if(result<min){
                    min=result;
                }
                cout<<sum<<min<<i<<j;                           
            }
        }
        cout<<min;
    }
}