#include<iostream>
#include<queue>
using namespace std;

//output queue
void showq(queue<int> gq)
{
    queue<int> g=gq;

    while(!g.empty())
    {
        cout<<'\t'<<g.front();
        g.pop();
    }
}

//main function as user to test
int main()
{
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);
    
    cout<<"The queue gquiz is: ";

    showq(gquiz);

    cout<<"\nguqiz.size(): "<<gquiz.size();
    cout<<"\ngquiz.front(): "<<gquiz.front();
    cout<<"\ngquiz.back(): "<<gquiz.back();

    cout<<"\ngquiz.pop(): ";

    gquiz.pop();
    showq(gquiz);
    cout<<endl;

    return 0;
}