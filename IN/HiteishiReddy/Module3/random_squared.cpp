#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
  int i, j, num; 
  double result;
  srand( (unsigned)time(NULL));
  for( i = 0; i < 5; i++){
      j = (rand()% 20 )+1;
      cout<<"Random Number:" << j << endl;
num = sqrt(j);
cout<<"Random num: " << floor(num)<< endl;

  }

  return 0;  
}



