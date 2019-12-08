#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

//this function prints contents of linked list
//starting from the given node
void printList(Node* n){
    while(n !=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}

void push(Node** head_ref, int new_data){
    //allocate node
    Node* new_node= new Node();

    //put in the data
    new_node->data=new_data;

    //make next of new node as head
    new_node->next=(* head_ref);

    //move the head to point to the new node
    (* head_ref)=new_node;
}

int main(){
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;

    //allocate 3 nodes in the heap
    head=new Node();
    second=new Node();
    third=new Node();

    head->data=1; //assign data in first node
    head->next=second; //link first node with second

    second->data=2; //assign data to second node
    second->next=third;

    third->data=3; //assign data to third node
    third->next=NULL;

    push((&head), 0);

    printList(head);

    return 0;
}