#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node* next;
};

void push(Node** head_ref, int new_data)  
{  
    Node* new_node = new Node(); //allocate node

    new_node->data = new_data;  //put in the data
  
    new_node->next = (*head_ref);  //Make next of new node as head
  
    (*head_ref) = new_node;  //move the head to point to the new node
}  

// This function prints contents of linked list
// starting from the given node
void printList(Node* n)
{
  while (n != NULL) {
    cout << n->data << " ";
    n = n->next;
  }
}

// Driver code
int main()
{
  Node* head = NULL;
  Node* second = NULL;
  Node* third = NULL;

  // allocate 3 nodes in the heap
  head = new Node();
  second = new Node();
  third = new Node();

  head->data = 1; // assign data in first node
  head->next = second; // Link first node with second

  second->data = 2; // assign data to second node
  second->next = third;

  third->data = 3; // assign data to third node
  third->next = NULL;

  push(&head, 6);  

  printList(head);

  return 0;
}