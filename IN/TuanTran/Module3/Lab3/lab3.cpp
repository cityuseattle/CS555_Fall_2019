#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int ascending(const void* a, const void* b)   // Ascending function for qsort to use
{
	const int* x = (int*) a;
	
    const int* y = (int*) b;
	
    if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;
    return 0;
}


int descending(const void* a, const void* b)       // Descending function for qsort to use
{
	const int* x = (int*) a;
	
    const int* y = (int*) b;
	
    if (*x > *y)
		return -1;
	else if (*x < *y)
		return 1;
    return 0;
}


void mergeArrays(int * arrA, int * arrB, int * arrC, const int lengA, const int lengB){
        

   for(int i=0; i<lengA; i++)           // Add every element of array A to array C
   {
      arrC[i] = arrA[i];   
   }

   for(int i=5; i<lengA+lengB; i++)       // Add every element of array B to array C
   {
      arrC[i] = arrB[i-5];   
   }
    


}

int main(){
    srand( (unsigned)time(NULL));  // This code is to make the program generate different random number everytime

    
    int arrayA[10];                 // Create array A
    int arrayB[8];                 // Create array B

    const int lengA=sizeof(arrayA) / sizeof(arrayA[0]);         // Create lengA to store the length of arrayA
    const int lengB=sizeof(arrayB) / sizeof(arrayB[0]);          // Create lengB to sotre the length of arrayB

    int arrayC[lengA+lengB];                                    // Create array C that has length is the sum of lengA and lengB

    const int lengC=sizeof(arrayC) / sizeof(arrayC[0]);         // Create lengC to store length of arrayC


    for (int i = 0; i < lengA; i++){                    // Generate random numbers from 0 to 1000 and put it into array A
        arrayA[i] = rand() % 1001;
    }
    for (int i = 0; i < lengB; i++){                       // Generate random numbers from 0 to 1000 and put it into array B
        arrayB[i] = rand() % 1001;
    }

    int * PointA = arrayA;
    int * PointB  = arrayB;                  // Create pointers for all three arrayA, arrayB, arrayC
    int * PointC = arrayC;


    mergeArrays(PointA,PointB,PointC,lengA,lengB);        // Call the mergeArrays and merge arrayA and B together to make arrayC
    qsort(arrayA, lengA, sizeof(int), ascending);           // Sort arrayA in ascending order
   
    cout<< "Start of  array A:  " ;

    for (int i = 0; i < lengA; i++){             // print out all element of arrayA
        cout<< arrayA[i] << ", ";
    }
    cout<< endl;                           // Print new line


    qsort(arrayB,lengB, sizeof(int), ascending);                // Sort arrayB in Descending order

    cout<< "Start of  array B:  " ;         

    for (int i = 0; i < lengA; i++){                            //Print out all elements of array B
        cout<< arrayB[i] << ", ";
    }
    cout <<endl;
    

    qsort(arrayC, lengA+lengB, sizeof(int), ascending);     //Sort arrayC in ascending order

    cout<< "Start of  array C:  " ;

    for (int i = 0; i <lengA+lengB; i++){      // Print out all elements of array C
        cout<< arrayC[i] << ", ";

    }


    return 0;
}