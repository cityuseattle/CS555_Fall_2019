#include <iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node* next;
        Node* head;
};
Node* head;
void printList(Node* n)
{
    while (n != NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
}

void Insert(int y){
    Node* temp = new Node(); //create dynamic memory allocation
    temp->data = y;
    temp->next = head; // temp->next = null; when list is empty
    head = temp;
    }
int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    Insert(5);
    fourth->next = NULL;
    printList(head);    
    return 0;
}