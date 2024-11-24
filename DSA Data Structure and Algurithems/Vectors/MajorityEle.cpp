#include<iostream>
using namespace std;

// Function to find the majority element with O(n^2) complexity
int MajorityEle(int arr[], int sz) {
    for (int i = 0; i < sz; i++) {
        int frequency = 0; // Reset frequency for each element
        for (int j = 0; j < sz; j++) {
            // Count occurrences of arr[i]
            if (arr[i] == arr[j]) {
                frequency++;
            }
        }
        // Check if the frequency is greater than half of the size
        if (frequency > sz / 2) {
            cout<<arr[i];
            return arr[i]; // Return the majority element
        }
    }
    return -1; // Return -1 if no majority element found
}

int main() {
    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 1, 2, 5, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int MajorEle = MajorityEle(arr, size);

    if (MajorEle != -1) {
        cout << "Majority element is: " << MajorEle << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}
