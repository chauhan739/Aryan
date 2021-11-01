#include<bits/stdc++.h>
using namespace std;

void insertionSort(int A[], int n);
/* Our main function which will sort the array passed in 
   it in as argument ascending order. */
void swap(int*, int*);
// This function will simply swap two integers passed in it.
void print(int A[], int n);
// This function will simply print the array provided to it.

int main(){
  int arr[] = {2,7,4,1,5,3};
  print(arr, 6); // Print the unsorted array
  insertionSort(arr, 6); // Function Call
  print(arr, 6); // Print the sorted array
  
  return 0;
}

void swap(int*i, int* j){
  int temp = *i;
  *i = *j;
  *j = temp;
}

void print(int A[], int n){
  for(int i = 0; i < n; i++)
    cout << A[i] << " ";
  cout << endl;
}

void insertionSort(int A[], int n){
  /* This function works by dividing the array in two parts. 
     First, SORTED part and the second, UNSORTED part. This 
     function will consider the first element of the array 
     to be sorted at start and will compare the next elemnt 
     with it */
  for(int i = 1; i < n; i++){
    int temp = i;
    /* This for loop will consider every element which it is 
       pointing in the sorted part of the array. */
    while(temp > 0 && A[temp - 1] > A[temp]){
      swap(A[temp - 1], A[temp]);
      temp -= 1;
    }
    /* This 'while' loop will give the newly entered element 
       which is also pointed by the 'A[temp]' the best position 
       in the sorted part of the array. This while loop will 
       continue to run until 'A[temp]' find itself the required 
       position in the sorted part. Also, 'A[temp]' /will not 
       always store the same value as it is decreasing by one 
       after every iteration in Line 45. */
  }
}

/* Note:-
   This sorting technique is called 'Insertion Sort' because this
   sort works on the principle of inserting an element ata particular 
   position. Similar to the rearranging the shuffled playing cards 
   according to the numbers present on them while playing. */ 
