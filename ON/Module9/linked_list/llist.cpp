#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

void Insert(Node** head_ref, int new_data)  
{  
    Node* new_node = new Node(); 
  
    Node *last = *head_ref; 

    new_node->data = new_data;  

    new_node->next = NULL;  

    if (*head_ref == NULL)  
    {  
        *head_ref = new_node;  
        return;  
    }  

    while (last->next != NULL)  
        last = last->next;  

    last->next = new_node;  
    return;  
}  


void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
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
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    Insert(&head, 4);
    printList(head);

    return 0;
}