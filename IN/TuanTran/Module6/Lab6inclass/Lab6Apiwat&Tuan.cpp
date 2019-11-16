#include <iostream>
using namespace std;




int main(){
int arr1[]=  {-1,2,10,16,2};
int arr2[]= {10,11,6,7,3};
int target = 100;
int mindif=0;
bool start=true;

    while(start){
    for(int i = 0;i<5;i++){ 
        for(int j = 0;j<5;j++){   
            if (target - (arr1[i]+arr2[j])==mindif)
            { 
                cout<< arr1[i] << " " << arr2[j] << endl;
                start = false;
            }     
        }
    } 
    mindif++; 
    }
    return 0;
}
