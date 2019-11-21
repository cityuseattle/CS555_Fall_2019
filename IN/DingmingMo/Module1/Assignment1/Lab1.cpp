#include<iostream>
using namespace std;

int main()
{
	int r,a,b,l,choice=3;
    
	float s;
        while (choice>2||choice<1) {
		cout<<"1. circle 2. rectangle; enter 1 or 2";
		cin>>choice;
        }
	try{
	if(cin.fail()){
		throw"error";
	}
	else if(choice==1)
	{
		cout<<"r= \n";
		cin>>r;
		s=3.14*r*r;
		cout<<"s="<<s<<endl;
	}
	else if(choice==2)
	{
		cout<<"a= \n";
		cin>>a;
		cout<<"b= \n";
		cin>>b;
		s=a*b;
		cout<<"s="<<s<<endl;
	}
    else if (choice>2)
    {
        cout<<"1. circle 2. rectangle; enter 1 or 2";
		cin>>choice;
    }
    else if (choice<1)
    {
        cout<<"1. circle 2. rectangle; enter 1 or 2";
		cin>>choice;
    }
	catch( char* error){
		cout<<error<<endl;
		break;
	}
	   }
	return 0;
}

