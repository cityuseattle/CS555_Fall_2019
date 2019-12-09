/*
 This code implements a linked list and functions to include (push), remove (pop) and print its nodes. Each element of the (class) 
 node contains the following information, in addition to required pointer field: 
   i) Roll number of the student (a float value)
   ii) Age of the student (an integer value)
 The “push” function will push a node (and its given parameters) to the head of the list (dynamically allocation).
 The “pop” function will remove a node of a given position from the list.
 The main code will create 3 preliminary records, print them, and give the user the option to include a new node and delete a node.
*/
#include <iostream>
using namespace std;

class Node {
/*
 Definition of class Node, acording to the program specifications: 
  . A float roll number for the student
  . A int age of the student
*/

   public:
     float rollNumber;
     int age;
     Node* next;  
};

void printList (Node* n) {
/*
 This function prints contents of linked list starting from the given node
*/

   cout << "-- ";
   while (n != NULL) {
     cout << "[RollNumber: " << n->rollNumber << " Age: " << n->age <<"] -- ";
     n = n->next;
   }
   cout << endl << endl;
}

void push (Node** head_ref, float newRollNumber, int newAge) {
/*
 This function creates a new node with the given data (RollNumber and Age) and put it in the head of the list
*/

   Node* new_node = new Node();  
   new_node->rollNumber = newRollNumber; 
   new_node->age = newAge;   

   new_node->next = (*head_ref);  // Make next of new node as head
   (*head_ref) = new_node;  //  Move the head to point to the new node
}  
  
void pop (Node **head_ref, int position) { 
/*
 This function deletes a node at the given position, given a reference (pointer to pointer) to the head of a list and a position.
*/ 

   if (*head_ref == NULL) // If linked list is empty, skip the rest of the function
      return; 
  
   Node* temp = *head_ref; // Store head node
  
   // If the chosem position to be removed is the head: 
   if (position == 0) { 
     *head_ref = temp->next;   // Change head 
     free(temp);               // Free the old head 
     return; 
    } 
      
   for (int i=0; temp!=NULL && i<position-1; i++) // // Find previous node of the node to be deleted 
     temp = temp->next; 
  
   if (temp == NULL || temp->next == NULL) // If position is more than number of nodes, skip the rest of the function
     return; 
     
   Node *next = temp->next->next; // Node temp->next is the node to be deleted. Store pointer to the next of node to be deleted       
   free(temp->next);  // Unlink the node from linked list and free memory 
   temp->next = next;  // Unlink the deleted node from list 
} 

int main () {
 char questionInput = 'y';  // Gets the input answer of the user to the program's questions
 float newRecordRollNumber; // RollNumber information input by the user of the new node to be push
 int newRecordAge; // Age information input by the user of the new node to be push          
 int removeFromPosition; // Position input by the user of the node to be removed (pop) 

 Node* head = NULL;
 Node* second = NULL;
 Node* third = NULL;

 // Creating the initial 3 records allocating nodes in the heap of the list:
 head = new Node();
 second = new Node();
 third = new Node();

 head->rollNumber = 1.1; // Assign data in the first node (a fixed float number)
 head->age = rand()%30;  // Assign data in the first node (a random int number from 0 to 30) 
 head->next = second; // Link first node with second

 second->rollNumber = 1.2; // Assign data in the second node (a fixed float number) 
 second->age = rand()%30; // Assign data in the second node (a random int number from 0 to 30) 
 second->next = third; // Link second node with third

 third->rollNumber = 1.3; // Assign data in the third node (a fixed float number)  
 third->age = rand()%30; // Assign data in the third node (a random int number from 0 to 30) 
 third->next = NULL; // Link third node with the end of the list

 // Printing the list:
 cout << "A file with 3 records was generated:" << endl;
 printList(head);

 // Including a new record in the list (if user wants) and print again:
 cout << "Would you like to push a new record? (y/<any key to no>): ";
 cin >> questionInput;
 if (questionInput == 'y'|| questionInput == 'Y') {
   cout << "Enter the student roll number (float): ";
   cin >> newRecordRollNumber;
   cout << "Enter the student age (int): ";
   cin >> newRecordAge;
   push(&head, newRecordRollNumber, newRecordAge);    
   
   cout << endl << "Updated list:" << endl;
   printList(head);
 }   

 // Removinf a record from the list (if user wants) and print again:
 cout << "Would you like to remove (pop) a record? (y/<any key to no>): ";
 cin >> questionInput;
 if (questionInput == 'y'|| questionInput == 'Y') {
   cout << "Select the position of the record (starting with 0): ";
   cin >> removeFromPosition;
   cout << endl <<"Removing record..." << endl;
   pop(&head, removeFromPosition);
   cout << endl << "Updated list:" << endl;
   printList(head);
 }   

 return 0;
}