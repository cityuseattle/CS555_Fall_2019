#include <iostream>
using namespace std;

/**
 * declaration of a linked list implemented queue containing float type values.
 * Also write a user-defined function in C++ to delete a float type number from the queue.
 * */

//node to store a queue entry 
class NODE
{
public:
        // local variables 
        float NUM;
        NODE *next;
};
//front stores the first node
//rear stores the last node
NODE *front, *rear;

// print function 
void printList(NODE* n){
    while (n != NULL){
        cout << n->NUM << " \n ";
        n = n->next;
    }
}

// delete function
void Delete()
{

    NODE *temp;
    // if the head is Null it will 
    // print that the queue is empty
    if (front == NULL)
        cout << " empty" << endl;
    else
    {
            // delets the element in the queue 
            temp = front;
            front = front->next;
            delete temp;
            
    }
}

// main function to test the delete function 
int main(){

    NODE* second = NULL;

    front = new NODE();
    second = new NODE();
    rear = new NODE();

    front -> NUM = 1;
    front -> next = second;
    second -> NUM = 2;
    second->next = rear;

    rear -> NUM = 3;
    second->next = NULL;

    printList(front);
    Delete();
    printList(front);

    return 0;

}
