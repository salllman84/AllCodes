#include<iostream>
using namespace std;

void MergeSortedArr(int A[], int m, int B[], int n){
    int i = m-1; int j = n-1; int indx = m+n-1;

    while(i >= 0 && j >= 0){
        if(A[i] >= B[j]){
            A[indx--] = A[i--];
        } else{
            A[indx --] = B[j--];
        }
    }
    while(j >= 0){
        A[indx--] = B[j--];
    }

}

void DisplayMergeArr(int A[], int m, int n){
    int size = m+n;
    
    for(int i = 0; i < size; i++){
        cout<<A[i]<<", ";
    }
}

int main(){
    int A[6] = {12, 14, 15};
    int m = 3;
    int B[3] = {10, 13, 16};
    int n = 3;

    MergeSortedArr(A, m, B, n);
    DisplayMergeArr(A, m, n);

    return 0;

}