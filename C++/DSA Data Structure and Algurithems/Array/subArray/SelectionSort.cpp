#include<iostream>
#include<algorithm>
using namespace std;

void SelectionSort(int arr[], int s){

    for(int i = 0; i < s - 1; i++){
        int minIndex = i;  // Assume current element is the minimum

        // Find the minimum element in the unsorted portion
        for(int j = i + 1; j < s; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;  // Update minIndex if a smaller element is found
            }
        }

        // Swap the found minimum with the current element i
        if(minIndex != i){
            swap(arr[i], arr[minIndex]);
        }
    }
}

void Display(int arr[], int sz){
    for(int i = 0; i < sz; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main(){
    int arr[] = {5, 3, 7, 9, 2, 1, 8, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, size);
    Display(arr, size);

    return 0;
}
