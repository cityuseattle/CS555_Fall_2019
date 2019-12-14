#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printList(Node* n){
    while (n != NULL){
        cout << n->data << "";
        n = n->next;
    }
}

void insert(Node* prev_node, int new_data)  
{  
    if (prev_node == NULL)  
    {  
        cout<<"the given previous node cannot be NULL";  
        return;  
    }  
    Node* new_node = new Node(); 
    new_node->data = new_data;  
    new_node->next = prev_node->next;  
    prev_node->next = new_node;
}

int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head -> data = 1;
    head -> next = second;
    second -> data = 2;
    second->next = third;

    third -> data = 3;
    second->next = NULL;

    return 0;
}
