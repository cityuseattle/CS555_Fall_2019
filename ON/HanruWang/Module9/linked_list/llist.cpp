#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void printList(Node* n) {
    while (n != NULL) {
        cout << n-> data << " ";
        n = n->next;
    }
    cout << endl;
}

void insert(Node *&n, int val) {
    Node *tmp = new Node();
    tmp -> data = val;
    tmp -> next = n;
    n = tmp;
    
}

int main() {
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head -> data = 1;
    head -> next = second;
    second -> data = 2;
    second -> next = third;
    third -> data = 3;
    third -> next = NULL;

    printList(head);
    insert(head, 4);
    cout << endl;
    printList(head);
    return 0;

}