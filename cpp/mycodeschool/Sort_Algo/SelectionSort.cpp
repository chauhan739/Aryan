#include<bits/stdc++.h>
using namespace std;

void selectionSort(int A[], int n);
/* SelectionSort is my function name with 'A'
   as argument denoting array to be sorted
   and 'n' as number of elements present in it. */
void swap(int*, int*);
// This is just a simple function of swapping
void print(int A[], int n);
// This is a simple function just printing the array

int main(){
  int arr[] = {2,7,4,1,5,3}; // Our initial unsorted array 
  print(arr, 6);
  selectionSort(arr, 6); // Function Call
  print(arr, 6);

  return 0;
}

void selectionSort(int A[], int n){
  for(int i = 0; i <= n - 2; i++)
    /* Starting loop from first element to second last element 
       as the last value will get sorted itself at the end of 
       this function*/
    {
    int iMin = i;
    // iMin will contain the index of first element.
    for(int j = i + 1; j <= n - 1; j++){
      if(A[j] < A[iMin])
	/* This 'if' condition will see if the nested loop 
	   enconters any element present in the array having
	   value lesser than the 'A[iMin]'. If it encounters, 
	   then it will update the value if 'iMin' to 'j' */
	iMin = j;
    }
    // Now we'll swap the 'i' index value with 'iMin' index value. 
    swap(&A[i], &A[iMin]);
  }
}

void swap(int* i, int* j){
  int temp = *i;
  *i = *j;
  *j = temp;
}

void print(int A[], int n){
  for(int i = 0; i < n; i++){
    cout << A[i] << " ";
  }
  cout << endl;
}
