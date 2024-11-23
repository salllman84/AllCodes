#include<iostream>
using namespace std;

// Function to swap the maximum and minimum values of the array
void RevOnlyMaxMin(int arr[], int size) {
    // Start with the first element as both max and min
    int MaxIndex = 0; 
    int MinIndex = 0;

    // Find indices of the max and min values
    for(int i = 1; i < size; i++) {
        if(arr[i] > arr[MaxIndex]) { // Update max index if current element is greater
            MaxIndex = i;
        }
        if(arr[i] < arr[MinIndex]) { // Update min index if current element is smaller
            MinIndex = i;
        }
    }

    // Swap the max and min elements using their indices
    swap(arr[MaxIndex], arr[MinIndex]);
}

int main() {
    int arr[] = {9, 2, 3, 4, 0, 6, 7, 8}; // Array with max 9 and min 0
    int size = 8;

    cout << "Original Array:\n";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // Swap max and min values
    RevOnlyMaxMin(arr, size);

    cout << "Array after swapping max and min values:\n";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}
