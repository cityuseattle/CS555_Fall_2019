#include <iostream>
#include <queue>

using namespace std;

void showqueue(queue<int> g)
{
    while (!g.empty())
    {
        cout << g.front() << " | ";
        g.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    cout << "The queue is: ";
    showqueue(gquiz);

    cout << "gquiz.size(): " << gquiz.size() << endl;
    cout << "gquiz.front(): " << gquiz.front() << endl;
    cout << "gquiz.back(): " << gquiz.back() << endl;

    cout << "Remove the first element" << endl;
    gquiz.pop();

    cout << "The queue is: ";
    showqueue(gquiz);

    return 0;
}