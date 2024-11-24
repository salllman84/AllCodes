#include<iostream>
using namespace std;

void insertionSort(int arr[], int s){
    for (int i=0; i<s; i++){
        int currentPoss = arr[i];
        int prevPoss = i-1;

        while(prevPoss >= 0 && arr[prevPoss] > currentPoss){
            arr[prevPoss + 1] = arr[prevPoss];
            prevPoss --;
        }
        arr[prevPoss+1] = currentPoss;
    }
}

void display(int arr[], int s){
    cout<<"Sorted Array is\n";
    for(int i=0; i<s; i++){
        cout<<arr[i] <<", ";
    }
}

int main(){
    int arr[]= {5, 1, 4, 2, 3};
    int size = sizeof(arr)/ sizeof(arr[0]);

    insertionSort(arr, size);
    display(arr, size);

    return 0;
}