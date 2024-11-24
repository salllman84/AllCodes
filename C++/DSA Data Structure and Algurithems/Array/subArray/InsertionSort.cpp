#include<iostream>
using namespace std;

void InsertionSort(int arr[], int sz){
    for(int i=1; i<sz; i++){
        int Curr = arr[i];
        int prev = i-1;

        while (prev >= 0 && arr [prev] > Curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = Curr;
    }
}


void Display(int arr[], int sz){
    for(int i = 0; i < sz; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main(){
    int arr[] = {5, 3, 7, 9, 4, 2, 1, 8, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    InsertionSort(arr, size);
    Display(arr, size);

    return 0;
}