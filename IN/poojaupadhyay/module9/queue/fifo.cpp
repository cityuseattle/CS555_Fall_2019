#include<iostream>
#include<queue>
using namespace std;

void showq(queue<int> gq)
{
    queue <int> g = gq;
    while(!g.empty())
    {
        cout << "\t" << g.front();
        g.pop();
    }

}

int main()
{
    queue <int> gquiz; 

    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    cout << "The queue gquiz is : ";
    showq(gquiz);

    cout << "\n gquize.size() : " << gquiz.size();
    cout << "\n gquize.front() : " << gquiz.front();
    cout << "\n gquize.back() : " << gquiz.back();

    cout << "\n gquiz.pop() : ";
    gquiz.pop();

    showq(gquiz);
    cout << endl;

    return 0;

}
