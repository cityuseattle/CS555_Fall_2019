#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int M = 5;
const int N = 10;

//Function prototypes
void merge(int A[], int B[], int C[]);
int compareAscending(const void *A, const void *B);
int compareDescending(const void *A, const void *B);

int main()
{
   int A[M], B[N], C[M+N];
   int i;
  
   // Set seed generator for random numbers
srand(time(NULL));
  
//Populating first array with random numbers between 0 to 1000
   for( i=0; i<M; i++)
       A[i] = rand() % 1000 + 0;
      
   //Populating second array with random numbers between 0 to 1000
   for( i=0; i<N; i++)
       B[i] = rand() % 1000 + 0;
  
   //Sorting A array in ascending order
   qsort(A,M,sizeof(int),compareAscending);
   //Sorting B array in descending order
   qsort(B,N,sizeof(int),compareDescending);
  
   merge(A, B, C);
  
   //Displaying the elements of A array
   cout << "Array A: ";
   for(i=0; i<M; i++)
       cout << A[i]<<" ";
  
   //Displaying the elements of B array
   cout << "\n\nArray B: ";
   for(i=0; i<N; i++)
       cout << B[i]<<" ";
  
   //Displaying the elements of C array
   cout << "\n\nArray C: ";
   for(i=0; i<M+N; i++)
       cout << C[i]<<" ";

   return 0;
}

//Comparator function to compare two elements of the array for ascending order
int compareAscending(const void *A, const void *B)
{
   return(*(int*)A - *(int*)B);
}

//Comparator function to compare two elements of the array for descending order
int compareDescending(const void *A, const void *B)
{
   return(*(int*)B - *(int*)A);
}

//Merge Function to Merge the elements of A array with B array and store resultant elements in C array
//Function receives three integer array as parameter
void merge(int A[], int B[], int C[])
{
   int i,j,k;
  
   //Merging elements of A array with B array and storing resultant elements in C array
   i=0,j=N-1,k=0;
   while(i<M && j>=0)
   {
       if(A[i]<B[j])
       {
           C[k]=A[i];
           i++;
       }
       else
       {
           C[k]=B[j];
           j--;
       }
       k++;
   }
  
   //Storing remaining elements of A array into C array when size of M>N
   while(i<M){
       C[k]=A[i];
       i++;
       k++;
   }
  
   //Storing remaining elements of B array into C array when size of N>M
   while(j>=0){
       C[k]=B[j];
       j--;
       k++;
   }
}