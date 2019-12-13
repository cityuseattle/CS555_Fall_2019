#include <iostream>
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
        cout<<n->data<<" ";
        n=n->next;
    }
}

/*inserts a new node on the front of the list. */
void push(Node** head_ref,int new_data)
{
    Node * new_node=new Node();     //allocate node

    new_node->data=new_data;        //put in the data

    new_node->next=(*head_ref);     //make next of the newnode as head

    (*head_ref)=new_node;           //move the head to point to the new node
}


/* Given a node prev_node, insert a new node after the given prev_node */
void insertAfter(struct Node* prev_node, int new_data)
{
    if(prev_node==NULL)
    {
        cout<<"Given previous node cannot be NULL";
        return;
    }
    struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));        //allocate new node
    new_node->data=new_data;        //put in the data
    new_node->next=prev_node->next;     //make next of the new node as next of prev_node
    prev_node->next=new_node;       //move the next of prev_node as new_node
}

/* Given a reference (pointer to pointer) to the head of a list and an int, appends a new node at the end  */
void append(struct Node** head_ref,int new_data)
{
    struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));   //allocate node
    struct Node *last=*head_ref;
    new_node->data=new_data;    //put in the data
    new_node->next=NULL;    //This node is going to be the last node so make next of it as NULL
    if(*head_ref==NULL)
    {
        *head_ref=new_node;
        return;
    }
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=new_node;
    return;
}

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

    push(&head,4);                           // Insert 4 at the beginning. So linked list becomes 4->1->2->3->NULL  
    insertAfter(second,5);                   // Insert 5 after 2. So linked list becomes 4->1->2->5->3->NULL
    append(&third,6);                       // Insert 4 at the end. So linked list becomes 4->1->2->5->3->6->NULL


    printList(head);

    return 0;
}