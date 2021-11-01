#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int A[], int n);
/* This is our function which will sort the passed array
   in ascending order by 'Bubble Sort' sorting technique. */
void swap(int*, int*);
// A simple function which will swap two integers passed in it.
void print(int A[], int n);
// A simple function which will print the array passed in it.

int main(){
  int arr[] = {2,7,4,1,5,3};
  print(arr, 6); // Print unsorted array
  bubbleSort(arr, 6); // Function Call
  print(arr, 6); // Print sorted array
  
  return 0;
}

void bubbleSort(int A[], int n){
  /* We will make two loops such that both loops iterators will
     point two adjacent elements so the 'if' condition inside 
     this function can compare the both values and if the value
     of the successor element is greater than the previous 
     element, we will swap both values. */
  for(int i = 0; i < n-1; i++){
    int flag = 0;
    for(int j = i + 1; j < n; j++){
      if(A[i] > A[j]){
	swap(A[i], A[j]);
	flag = 1;
      }
    }
    /* We had added 'flag' in line 28 because there must be some 
       in which we don't require any kind of sorting after some 
       pass but the loop will continue to traverse array which 
       do not serve any purpose instead of increasing time complexity 
       of the algorithm. Like in this case, the array will be sorted 
       automatically after third pass. Also, the both loop will 
       continue to run if the array passed is the sorted one. */
    if(flag == 0)
      /* Line 32 will check that if any swappping took place. If so, 
	 flag value will be updated there as '1'. If no swapping took 
	 in a traverse, then the flag will conr=tinue to hold the value 
	 '0', which means that no more swapping is needed and the array
	 is sorted in the desired manner. Then this 'if' statement will 
	 executed in that case which will break the running 'for' loop 
	 saving some time. */
      break;
  }
}

void swap(int* i, int* j){
  int temp = *i;
  *i = *j;
  *j = temp;
}

void print(int A[], int n){
  for(int i = 0; i < n; i++)
    cout << A[i] << " ";
  cout << endl;
}

/* Note:-
   This sorting algorithm is called 'Bubble Sort' because it move the 
   largest element to the top (ie last) of the array. In the very 
   similar way, like the bubbles tend to move up to the surface. 
   That's why this sorting technique is named as 'Bubble Sort'. */
