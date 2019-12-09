#include <iostream>
using namespace std;

class Node {
   public:
     int data;
     Node* next;  
};

void printList (Node* n) {
/*
 This function prints contents of linked list starting from the given node
*/
   while (n != NULL) {
     cout << n->data << " ";
     n = n->next;
   }
}

void push(Node** head_ref, int new_data)  
{  
   // 1. allocate node 
   Node* new_node = new Node();  
  
   // 2. put in the data 
   new_node->data = new_data;  
  
   // 3. Make next of new node as head
   new_node->next = (*head_ref);  
  
   // 4. move the head to point to the new node
   (*head_ref) = new_node;  
}  
  

int main () {
 Node* head = NULL;
 Node* second = NULL;
 Node* third = NULL;

 // allocate 3 nodes in the heap
 head = new Node();
 second = new Node();
 third = new Node();

 head->data = 1; // assign data in the first node  
 head->next = second; // link first node with second

 second->data = 2; // assign data in the second node  
 second->next = third; // link second node with third

 third->data = 3; // assign data in the third node  
 third->next = NULL; 

 push(&head, 7);  

 printList(head);
 
 return 0;
}