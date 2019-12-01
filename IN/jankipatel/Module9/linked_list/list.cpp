
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void printList(Node* n){
    while(n != NULL){
        cout<< n->data <<" ";
        n = n->next;
    }
}

Node* insertNodeAtFront( Node* head, int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}

void insertNodeAfter( Node* prev, int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = prev->next;
    prev->next = newNode;
}

Node* head = NULL;
int main(){
    
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);
    cout<<endl<<endl;

    head = insertNodeAtFront(head, 0);
    printList(head);
    cout<<endl<<endl;
    
    insertNodeAfter(second, 4);
    printList(head);
    cout<<endl<< endl;

    insertNodeAfter(third, 40);
    printList(head);
    cout<<endl;

    return 0;
}


