#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

void printList(Node *n)
{
    while(n!=NULL){
        cout <<n->data<<" ";
        n=n->next;
    }
}

void insert(Node *head_ref, int new_data)  
{  
    /* 1. allocate node */
    Node* new_node = new Node();  
  
    /* 2. put in the data */
    new_node->data = new_data;  
  
    /* 3. Make next of new node as head */
    head_ref->next = new_node;  

    new_node->next = NULL;
   
}  

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data =1;
    head->next = second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    insert(third, 4);

    
    printList(head);
    return 0;
}