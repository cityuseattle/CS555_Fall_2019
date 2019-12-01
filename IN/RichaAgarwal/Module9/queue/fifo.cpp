#include <iostream>
#include <queue>

using namespace std;

void showq(queue <int> gq)
{
    queue <int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop();
    }
};


int main()
{
    queue <int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    cout << "The queue gquiz is : ";
    showq(gquiz);

     cout << "\ngquiz.size() : " << gquiz.size();
     cout << "\ngquiz.size() : " << gquiz.front();
     cout << "\ngquiz.size() : " << gquiz.back();

     cout << "\ngquiz.pop() : ";
     gquiz.pop();
     showq(gquiz);
     cout << endl;
    return 0;
}