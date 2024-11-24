#include<iostream>
using namespace std;

// Function to print unique numbers in an array
void PrintUniqueNumbers(int arr[], int size) {
    bool isUnique;

    cout << "Unique numbers in the array are: ";

    for(int i = 0; i < size; i++) {
        isUnique = true; // Assume the number is unique

        // Check if arr[i] appears again in the array
        for(int j = 0; j < size; j++) {
            if(i!=j && arr[i] == arr[j]) // i!=j will skip the same index
            {
                isUnique = false; // Found a duplicate
                //break; // No need to check further
            }
        }

        // If isUnique is still true, then print the number
        if(isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 5, 6, 4, 7, 8, 9, 6, 8}; // Example array with some duplicates
    int size = sizeof(arr) / sizeof(arr[0]);

    PrintUniqueNumbers(arr, size);

    return 0;
}
