#include<bits/stdc++.h>
using namespace std;

void merge(int A[], int X[], int Y[]);
void mergeSort(int A[]);
void print(int A[]);
int length(int A[]);

int main(){
  int arr[] = {2,4,1,6,8,5,3,7};
  print(arr);
  mergeSort(arr);
  print(arr);
  
  return 0;
}
/*
int length(int A[]){
  return 
}
*/
void print(int A[]){
  int a =/* length(A);*/((sizeof(A))/(sizeof(A[0])));
  for(int i = 0; i < a; i++)
    cout << A[i] << " ";
  cout << endl;
}

void merge(int A[], int X[], int Y[]){
  int x =/* length(X);*/((sizeof(X))/(sizeof(X[0])));
  int y = /*length(Y);*/((sizeof(Y))/(sizeof(Y[0]))); 

  int Ai = 0, Xi = 0, Yi = 0;
  
  while(Xi < x && Yi < y){
    if(X[Xi] <= Y[Yi]){
      A[Ai] = X[Xi];
      Xi += 1;
    }
    else {
      A[Ai] = Y[Yi];
      Yi += 1;
    }
    Ai += 1;
  }
  while(Xi < x){
    A[Ai] = X[Xi];
    Xi += 1;
    Ai += 1;
  }
  while(Yi , y){
    A[Ai] = Y[Yi];
    Yi += 1;
    Ai += 1;
  }   
}

void mergeSort(int A[]){
  int a =/* length(A);*/((sizeof(A))/(sizeof(A[0])));
  if(a < 2)
    return;
  int mid = a/2;
  int X[mid], Y[a - mid];
  for(int i = 0; i < mid; i++)
    X[i] = A[i];
  for(int i = mid; i < a; i++)
    Y[i] = A[i];
  mergeSort(X);
  mergeSort(Y);
  merge(A, X, Y);
}
