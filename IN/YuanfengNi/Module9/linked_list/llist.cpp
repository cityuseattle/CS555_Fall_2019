#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void insertAfter(struct Node* prev_node, int new_data) 
{ 
    if (prev_node == NULL)  
    {  
       printf("the given previous node cannot be NULL");        
       return;   
    }   
    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node)); 
    new_node->data  = new_data; 
    new_node->next = prev_node->next;  
    prev_node->next = new_node; 
} 
void printList(Node* n)
{
    while (n!=NULL){
        cout<<n->data<<" ";
        n= n->next;
    }
}
int main(){
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
    insertAfter(second,33);
    printList(head);
    return 0;
}