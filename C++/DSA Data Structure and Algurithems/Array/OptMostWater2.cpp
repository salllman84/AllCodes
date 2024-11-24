#include<iostream>
#include<vector>
using namespace std;

vector<int> MostWaterIndex(vector<int> Vec) {
    int left = 0, right = Vec.size() - 1;
    int MaxWater = 0;
    vector<int> M_index = {0, 0};  // Initialize with some default values

    for (;left < right;) {
        // Calculate the area of water stored
        int height = min(Vec[left], Vec[right]);
        int width = right - left;
        int CurrentWater = height * width;

        // If we find a larger area, update MaxWater and the indices
        if (CurrentWater > MaxWater) {
            MaxWater = CurrentWater;
            M_index = {left, right};
        }

        // Move the pointer that has the smaller height
        if (Vec[left] < Vec[right]) {
            left++;
        } else {
            right--;
        }
    }

    return M_index;  // Return the indices
}

int main() {
    vector<int> Arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    vector<int> Ans = MostWaterIndex(Arr);

    cout << "Indices that can store the most water: " << Ans[0] << ", " << Ans[1] << endl;

    return 0;
}
