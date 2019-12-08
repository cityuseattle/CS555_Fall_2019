#include<iostream>
using namespace std;

int main(){
int num;//Declare num as an integer
int r,a,b,l;//Declare r,a,b,l as a7n integer
float s;//Declare the area s as a floating point number
while(true) //The while loop is a control flow statement that indicates that the condition is true, allowing code to be executed repeatedly based on the given condition.
{l0
    cout<<"1. circle 2. rectangle; enter 1 or 2"<<endl;//Output selection circle or rectangle
    cin >> num;//User input num
    
       if(cin.fail()){
           cin.clear();
           cin.sync();
       }//When an input error occurs, cin.clear() clears the input and cin.sync returns to re-enter.

   if(num>0 && num <= 2){
           
           break;
       }//When num is greater than 0 or less than or equal to 2, that is, when num is 1 or 2, the while loop is jumped out.
}
 if(num==1)
	{
		cout<<"r= \n";
		cin>>r;
		s=3.14*r*r;
		cout<<"s="<<s<<endl;
	}//When num is 1, enter the circular calculation formula, input the radius r, and output the circular area.
else if(num==2)
	{
		cout<<"a= \n";
		cin>>a;
		cout<<"b= \n";
		cin>>b;
		s=a*b;
		cout<<"s="<<s<<endl;
	}//When num is 2, enter the rectangular calculation formula, input length a, width b, and output rectangular area s.
return 0;
}