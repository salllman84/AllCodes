#include<iostream>
using namespace std;

// write a function to swap each max and min vlaues of an array?

void SwapMaxMin(int arr[], int size){
    int start=0, end=size-1;
    for(;start<end;){
        if(arr[start]>arr[end])// using || operator will reverse all values of array
        {
            swap(arr[start], arr[end]);
        }
        start++, end--;
    }
}

int main(){
    int arr[]={5,4,6,2,8}, size=5;
    cout<<"Original Values\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    SwapMaxMin(arr,size);
    cout<<"\nswaped values\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}