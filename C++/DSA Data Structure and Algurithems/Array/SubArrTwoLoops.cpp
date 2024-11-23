#include<iostream>
using namespace std;

// by chatgpt not optimal way || missing numberrs

void PrintSubArrays(int arr[], int size) {
    // Outer loop to pick the starting point of the subarray
    for (int start = 0; start < size; start++) {
        
        // Inner loop to extend the subarray to different end points
        for (int end = start; end < size; end++) {
            // Print the current element as part of the current subarray
            cout << arr[end];
        }
        cout<<" ";
    }
    cout<<endl;
}

int main() {
    int Arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(Arr) / sizeof(int);
    
    PrintSubArrays(Arr, size);
    
    return 0;
}
