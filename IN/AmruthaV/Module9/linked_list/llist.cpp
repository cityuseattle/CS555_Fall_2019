#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

void printList(Node *n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

void addNode(Node *head, Node *newNode)
{
    if (head != NULL && newNode != NULL)
    {
        if (head->next == NULL)
        {
            head->next = newNode;
        }
        else
        {
            Node *curr = head->next;
            while (curr->next != NULL)
            {
                curr = curr->next;
            }
            curr->next = newNode;
        }
    }
    
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

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

    Node *newNode = NULL;
    newNode = new Node();
    newNode->data = 4;
    newNode->next = NULL;

    cout << "Inserting a new node at the end of the list" << endl;
    addNode(head, newNode);

    printList(head);

    return 0;
}