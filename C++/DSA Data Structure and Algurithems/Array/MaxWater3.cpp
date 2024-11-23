#include<iostream>
#include<climits>
#include<vector>
using namespace std;

// return indices instread of vlaue

vector<int> MaxWaterIndex(vector<int> Vec) {
    int MaxWaterArea = 0;
    vector<int> MaxIndex = {0, 0};  // Initialize with some default values
    for (int i = 0; i < Vec.size(); i++) {
        for (int j = i + 1; j < Vec.size(); j++) {
            int width = j - i;
            int height = min(Vec[i], Vec[j]);
            int CurrentWater = width * height;

            // Update MaxWaterArea and MaxIndex when a larger area is found
            if (CurrentWater > MaxWaterArea) {
                MaxWaterArea = CurrentWater;
                MaxIndex = {i, j};  // Store the indices
            }
        }
    }
    return MaxIndex;  // Return the indices after loop completion
}

int main() {
    vector<int> Arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    vector<int> MaxArea = MaxWaterIndex(Arr);

    cout << "Indices that can store the most water: " << MaxArea[0] << " " << MaxArea[1] << endl;

    return 0;
}
