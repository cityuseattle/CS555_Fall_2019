#include<iostream>
using namespace std;


int getintset(int a[],int n,int set[])
{
    int count=0,k=n;
    while(k)
    {
        for(int j=1;j<=k;j++){
            if(a[0]==a[j])
            break;
        if(j==k)
        set[count++]=a[0];
    }
    for(int i=0;i<=n;i++){
	    a[i]=a[i+1];
    }
// a[k-1]=0;
    k--;
    }
    set[count]=a[0];
    return count;
}
int main()
{
    int i, j;
    cout << "Array length: " << endl;
    cin >> i;
    cout << "Array input: " << endl;
    cin >> j;
    int a[i]={j};
    int b[100];
    int m=getintset(a,7,b);
    for(int j=0;j<=m;j++)
    cout<< b[j] <<endl;
return 0;
}