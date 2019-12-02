#include<iostream>
using namespace std;

void  swap1(char &a, char &b)

{

    char temp = a;
    a = b;
    b = temp;
    

}


int main()
{
    char a = 'x';
    char b = 'y';

cout << " Before swapping " << a << " " << b<< endl;
    swap1(a,b);
 cout << " after swapping" << a << " " << b << endl;


}

// int main()
// {
// int a;
// int *p = &a;

// cout << a<< " " << &a<< endl;
// cout << p<< " " << &p << endl;

// } 