#include<iostream>
using namespace std;

// Function to find a pair with a given sum and return their indices
int* PairSum(int arr[], int s, int tar) {
    static int ans[2];  // static array to return the indices
    for(int i = 0; i < s; i++) {
        for(int j = i + 1; j < s; j++) {
            if(arr[i] + arr[j] == tar) {
                ans[0] = i; // Store index i
                ans[1] = j; // Store index j
                return ans; // Return the indices array
            }
        }
    }
    return nullptr;  // Return null pointer if no pair found
}

int main() {
    int Arr[] = {1, 2, 3, 4, 6, 4, 7, 9, 12};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    int target = 18;
    
    int* ans = PairSum(Arr, size, target);
        cout << "Indices of the pair: " << ans[0] << " and " << ans[1] << endl;
        cout << "Values: " << Arr[ans[0]] << " + " << Arr[ans[1]] << " = " << target << endl;
    
    if(ans=nullptr){
        cout << "No pair found for the sum " << target << endl;
    }
    
    return 0;
}
