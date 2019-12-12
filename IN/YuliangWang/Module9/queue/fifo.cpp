#include <iostream>
#include <queue>

using namespace std;

void showq(queue<int> gq)
{
    queue<int>g = gq;
    while(!g.empty())
    {
        cout<<'\t'<<g.front();
        g.pop();
    }
}

int main()
{
    queue<int>gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    cout<<"The queue gquiz is: ";
    showq(gquiz);

    cout<<'\n'<<"gquiz.size() is: "<<gquiz.size();
    cout<<'\n'<<"gquiz.front() is: "<<gquiz.front();
    cout<<'\n'<<"gquiz.back() is: "<<gquiz.back();
    gquiz.pop();
    cout<<'\n'<<"the queue after is: ";
    showq(gquiz);
    
}