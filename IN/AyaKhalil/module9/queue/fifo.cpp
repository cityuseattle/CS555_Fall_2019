#include<iostream>
#include<queue>
using namespace std;

void showq(queue <int> gq){
    queue <int> g=gq;
    while(!g.empty()){
        cout<<'\t'<<g.front();
        g.pop();
    }
}
int main(){
    queue <int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    cout <<"The queue is:  ";
    showq(gquiz);

    cout<<"\n gquiz.size:  "<<gquiz.size();
    cout<<"\n gquiz.front:  "<<gquiz.front();
    cout<<"\n gquiz.back:  "<<gquiz.back();

    cout<<"\n queue.pop:  ";
    gquiz.pop();
    showq(gquiz);
    cout<<endl;
    return 0;
}