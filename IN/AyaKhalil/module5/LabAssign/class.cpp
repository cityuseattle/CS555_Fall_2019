#include<iostream>
using namespace std;

int main(){
    int target=7;
    int a[5]={-1,2,10,16,6};
    int b[5]={10,11,5,7,6};

    for(int i =0 ;i<5;i++){
        for(int j=0;j<5;j++){
            if(b[j]==target-a[i]){
                cout<<"you got ur value:   "<<a[i]<<"   " <<b[j] <<endl;
                break;
            }
            else if(b[j]==target-a[i]-1){
                 cout<<"you got ur value:   "<<a[i]<<"   " <<b[j] <<endl;
            }
            else if(b[j]==target-a[i]+1){
                 cout<<"you got ur value:   "<<a[i]<<"   " <<b[j] <<endl;
            }
            else
            {
                cout<<"no match"<<endl;
            }
            

        }
    }
     return 0;
}