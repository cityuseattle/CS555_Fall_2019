#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// This function prints contents of linked list
// starting from the given node
void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

// Challenge Accepted!
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
            Node *tail = head->next;
            // Find the tail node
            while (tail->next != NULL)
            {
                tail = tail->next;
            }

            // Add the new node to the end of the linked list
            tail->next = newNode;
        }
    }
    else
    {
        cout << "Either the head or new node is NULL!";
    }
}

// Driver code
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    // allocate 3 nodes in the heap
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

    // Insert the new node to the end of the list
    cout << "Insert a new node and print" << endl;
    addNode(head, newNode);

    printList(head);

    return 0;
}