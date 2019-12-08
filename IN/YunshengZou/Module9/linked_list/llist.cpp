#include <iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;
};

void insertNode(Node* preNd,int new_data)
{
    if(preNd == NULL)
    {
       cout<<"The given previous node cannot be NULL"<<endl;        
       return;   
    }
    struct Node* newNd =(struct Node*) malloc(sizeof(struct Node));
    newNd->data  = new_data; 
    newNd->next = preNd->next;  
    preNd->next = newNd; 
}

void printList(Node* n)
{
    while(n!=NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}

int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    //allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;//assign data in first node
    head->next = second;//link first node with second

    third->data = 3;//assign data to third node
    third->next = NULL;

    printList(head);
    return 0;
}