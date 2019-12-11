#include <iostream>
using namespace std;

class Node
{
public:
    int data; //value
    Node *next; //address for next node
};

void PrintList(Node* n) //print linklist value from 1 to last
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}

//insert node when have pre
void InsertList(Node* pre,Node* n) 
{
    if(pre==NULL)
    {
        cout<<"Pre Node is NUll"<<endl;
        return;
    }

    Node* temp=NULL;
    temp=pre->next;
    pre->next=n;
    n->next=temp;
}
 
// main function as user
int main()
{
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;

    head=new Node();
    second=new Node();
    third=new Node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    Node* fourth=NULL;
    fourth=new Node();
    fourth->data=10;
    InsertList(second,fourth);
    
    PrintList(head);
    return 0;
}