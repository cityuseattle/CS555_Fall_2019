#include <iostream>
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
    //generate random number between 1 and 100
    int num;
     num = (rand() % (100 - 1 + 1)) + 1;
    
    //the user is allowed to guess 10 times     
    for(int i=0;i<10;i++){
        cout<<"Please enter a number:   " ;
        int k;
        //the user guess  
        cin>> k;
        // if the number is bigger than the random number
        if(k>num){
            cout<<"This is too big"<<endl;
        }
        //if it's lower than the generated number
        else if(k<num){
            cout<<"This is too low"<<endl;
        }    
        //in case it's equal
        else{
            cout<<"correct";
            break;
        } 
        if(i==9){
            cout<<"Game Over";
        }
    }


    
    return 0;

}