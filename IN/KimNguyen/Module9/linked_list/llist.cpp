#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

//This function prints contents of linked list starting from the given node
void printList(Node* n){
    while(n != NULL){
        cout << n ->data << " ";
        n = n->next;
    }
}

//Driver code
int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    //allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();


    head -> data = 1; //assign data in first node
    head-> next = second; //link first node with second

    second -> data = 2; //assign data to second node
    second -> next = third; 

    third -> data = 3; //assign data to third node
    third -> next = NULL;

    //challenge: write func to insert a node
    int push (Node** head, int inserted);{
        Node* inserted = new Node();
        inserted -> data = 0;
        inserted -> next = head;
        head = inserted;
    }

    printList(head);

    return 0;
}