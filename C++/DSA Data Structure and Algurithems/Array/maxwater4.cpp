#include<iostream>
#include<climits>
#include<vector>
using namespace std;
// return The Calculated Area = here equal to = 49
int MaxWaterValues(vector<int> Vec) {
    int MaxWaterArea = 0;
    vector<int> MaxValues = {0, 0};  // Initialize to hold the values that store the most water
    for (int i = 0; i < Vec.size(); i++) {
        for (int j = i + 1; j < Vec.size(); j++) {
            int width = j - i;
            int height = min(Vec[i], Vec[j]);
            int CurrentWater = width * height;

            // Update MaxWaterArea and MaxValues when a larger area is found
            if (CurrentWater > MaxWaterArea) {
                MaxWaterArea = CurrentWater;
                //MaxValues = {Vec[i], Vec[j]};  // Store the values instead of indices
            }
        }
    }
    return MaxWaterArea;  // Return the values after loop completion
}

int main() {
    vector<int> Arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int MaxWater = MaxWaterValues(Arr);

    cout << "Values that can store the most water: " << MaxWater<< endl;

    return 0;
}
