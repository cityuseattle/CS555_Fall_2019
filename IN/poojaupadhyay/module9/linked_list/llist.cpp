#include<iostream>
using namespace std;
class Node
{
public:
   int data;
   Node* next;
};


void printList(Node* n)
{
    while(n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

void insert_node(Node *head, int val)
{
    while(head!= NULL)
    {

         Node* p = new Node();

        if(head->next == NULL)
        {
            head->next = p;
            p->data = val;
            break;
        }

        head = head->next;
    }

    cout << " After inserting a node with value 4 " << endl;
    //printList(head);
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next =second;

    second->data = 2;
    second->next = third;
    
    third->data = 3;
    third->next = NULL;
    
    insert_node(head, 4);
    printList(head);

}