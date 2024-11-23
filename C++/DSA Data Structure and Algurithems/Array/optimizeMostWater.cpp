#include<iostream>
#include<climits>
#include<vector>
using namespace std;
// return maxwater area.  // Time complexity = O(n)
int MaxWaterValues(vector<int> Vec) {
    int MaxWater = 0, left = 0, right = Vec.size()-1;

    for(;left<right;){
        int Width = right - left;
        int Height = min(Vec[left], Vec[right]);
        int CurrWater = Width * Height;
        MaxWater = max(CurrWater, MaxWater);
        if(Vec[left]<Vec[right]){
            left++;
        } else{
            right --;
        }
    }
    return MaxWater;
}

int main() {
    vector<int> Arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int MaxWater = MaxWaterValues(Arr);

    cout << "Values that can store the most water: " << MaxWater<< endl;

    return 0;
}
