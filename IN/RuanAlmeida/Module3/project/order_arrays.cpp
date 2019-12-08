#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

static const int A_ARRAY_SIZE = 10;
static const int B_ARRAY_SIZE = 5;
static const int RANDOM_LIMIT = 1000;

int array_A[A_ARRAY_SIZE], array_B[B_ARRAY_SIZE], array_C[A_ARRAY_SIZE + B_ARRAY_SIZE];

void order_A_ascending();
void order_B_descending();
void merged_C_ascending();

int main() {
    int i;

    // populate array_A
    for(int i=0; i<A_ARRAY_SIZE; i++) { 
        array_A[i] = (rand() % RANDOM_LIMIT) + 1;   // Generate a random number between 1 and RANDOM_LIMIT
    }
    // display array_A
    cout << "array_A: " << endl;
    for(i=0; i<A_ARRAY_SIZE; i++) { 
        cout << array_A[i] << " ";
    }
    cout << endl;
    // order array_A (ascending)
    order_A_ascending();
    // display array_A
    cout << "Ascending array_A: " << endl;
    for(i=0; i<A_ARRAY_SIZE; i++) { 
        cout << array_A[i] << " ";
    }
    cout << endl << endl;

    // populate array_B
    for(int i=0; i<B_ARRAY_SIZE; i++) { 
        array_B[i] = (rand() % RANDOM_LIMIT) + 1;   // Generate a random number between 1 and RANDOM_LIMIT
    }
    // display array_B
    cout << "Array_B: " << endl;
    for(i=0; i<B_ARRAY_SIZE; i++) { 
        cout << array_B[i] << " ";
    }
    cout << endl;
    // order array_B (descending)
    order_B_descending();
    // display array_B
    cout << "Descending array_B: " << endl;
    for(i=0; i<B_ARRAY_SIZE; i++) { 
        cout << array_B[i] << " ";
    }
    cout << endl << endl;

    merged_C_ascending();
    // display array_C
    cout << "Merged ascending array_C: " << endl;
    for(i=0; i<(A_ARRAY_SIZE + B_ARRAY_SIZE); i++) { 
        cout << array_C[i] << " ";
    }
    cout << endl << endl;

    return 0;
}

void order_A_ascending() {
    int i, j, aux;
    
    // rebuild array in ascending order
    for( i=0; i<A_ARRAY_SIZE; i++ ) {
        for( j=i+1; j<A_ARRAY_SIZE; j++ ) {
            if(array_A[i] > array_A[j] ) {
              aux = array_A[i];
              array_A[i] = array_A[j];
              array_A[j] = aux;
            }
        }
    }
}

void order_B_descending() { 
    int i, j, aux;  

    // rebuild array in descending order
    for( i=0; i<B_ARRAY_SIZE; i++ ) {
        for( j=i+1; j<B_ARRAY_SIZE; j++ ) {
            if(array_B[i] < array_B[j] ) {
              aux = array_B[i];
              array_B[i] = array_B[j];
              array_B[j] = aux;
            }
        }
    }
}

void merged_C_ascending() {
    int i = 0, j = 1, k = 0; 
  
    // Traverse both arrays 
    while (i < A_ARRAY_SIZE && j <= B_ARRAY_SIZE) 
    { 
        // Check if current element of array_A is smaller than current element of array_B. 
        // To make the algorithm more eficient, we will start comparing the first element of array_A (and go forwards) 
        // with the last element of array_B (and go backwards). The reason for that is because array_A is already on a ascending order
        // and array_B is already on a descending order   
        if (array_A[i] < array_B[B_ARRAY_SIZE-j]) {
            array_C[k] = array_A[i];  // assigne the smaler element to array_C
            i++; // move for the next position of the compared array
        }            
        else {
            array_C[k] = array_B[B_ARRAY_SIZE-j]; // assigne the smaler element to array_C
            j++; // move for the next position of the compared array
        }
        k++;     
    } 
  
    // Store remaining elements of array_A
    while (i < A_ARRAY_SIZE) 
        array_C[k++] = array_A[i++]; 
  
    // Store remaining elements of array_B
    while (j <= B_ARRAY_SIZE) {
        array_C[k] = array_B[B_ARRAY_SIZE-j];
        k++;
        j++;
    }  
}    
