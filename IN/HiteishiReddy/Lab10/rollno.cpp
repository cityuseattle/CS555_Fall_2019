#include <iostream>
using namespace std;

//node to store a stack entry
class NODE
{
public:
    int rollNo;
    int age;
    NODE *next;
};

//top stores the top node
class stack
{
public:
    NODE *top;
};

// A utility function to create
//  new linked list node.
NODE *newNode(int p, int r)
{
    NODE *temp = new NODE();
    temp->rollNo = p;
    temp->age = r;
    temp->next = NULL;
    return temp;
}

//  create an empty stack
stack *createstack()
{
    stack *q = new stack();
    q->top = NULL;
    return q;
}

// The function to add a rollNo k and a to q
void PUSH(stack *q, int k, int a)
{
    // Create a new LL node
    NODE *temp = newNode(k, a);

    // If stack is empty, then
    // new node is top and rear both
    if (q->top == NULL)
    {
        q->top = temp;
        return;
    }

    // Add the new node at
    // the end of stack and change rear
    q->top->next = temp;
    q->top = temp;
}

// Function to remove
// a rollNo from given stack q
NODE *POP(stack *q)
{
    // If stack is empty, return NULL.
    if (q->top == NULL)
    {
        return NULL;
    }
    // Store previous top and
    // move top one node ahead
    NODE *temp = new NODE;
    temp = q->top;
    q->top = q->top->next;


    return temp;
}

// Driver code
int main()
{
    stack *q = createstack();
    PUSH(q, 5, 24);
    PUSH(q, 10, 30);
    POP(q);
    POP(q);
    PUSH(q, 7, 35);
    PUSH(q, 12, 40);
    PUSH(q, 17, 50);
    NODE *n = POP(q);
    if (n != NULL)
        cout << " item POPPed is :  " << n->rollNo;
    return 0;
}
