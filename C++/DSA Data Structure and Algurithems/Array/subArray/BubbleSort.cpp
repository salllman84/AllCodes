#include<iostream>
#include<algorithm>
using namespace std;

void BubbleSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void DisPlayArr (int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i] <<"\t";
    }
}

int main(){
    int arr[]={4, 3, 8, 9, 2, 12, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    BubbleSort(arr, size);
    DisPlayArr(arr, size);
}