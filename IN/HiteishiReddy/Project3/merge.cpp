

#include<iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

// function to merge 
void merge(int a[], int b[], int c[], int x, int m, int f){

// declaring variables 
int d=0, e=m-1; f=0;

// loop to check and merge array a and b 
	while (d<x && e>=0)
	{
		if (a[d]<b[e])
			c[f++]=a[d++];
		else if (a[d]>b[e])
			c[f++]=b[e--];
		else
		{
			c[f++]=a[d++];
			e--;
		}
	}

	for (int p=d;p<x;p++)
		c[f++]=a[p];
	for (int p=e;p>=0;p--)
		c[f++]=b[p];
}


// compare function for array a 
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

// compare function for array b 
int compareDes(const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a);
}


// main
int main(){
int x = 10, m = 10;
int f = x+m;

// declaring array and array size 
int *a= new int[x];
int *b= new int[m];
int *c=new int[f];
//  initialize random seed: 
srand(time(0));

// Print array A
cout<<"Array A \n";
// populate array with random 
for(int i=0; i<x; i++) 
{
    a[i] = (rand()%1000)+1;	
} 
//quicksort for array b to sort in ascending
qsort(a, x, sizeof(int),compare); 
for(int i=0;i<x;i++)
	{	
	cout<<a[i]<<"\n";
	}


// print array B 
cout<<"Array B"<<"\n";
// populate array with random 
for(int i=0; i<m; i++)
{ 
    b[i] = (rand()%1000)+1;  
}
// quicksort for array b to sort in decending
qsort(b, m, sizeof(int),compareDes); 
for(int i=0;i<x;i++)
	{	
	cout<<b[i]<<"\n";
	}

// call merge function
merge(a,b,c,x,m, f);
cout<<"Array C"<<"\n";

// print out array C
for(int q=0;q<f;q++)
	
	cout<<c[q]<<"\n";

	return 0;

 }



