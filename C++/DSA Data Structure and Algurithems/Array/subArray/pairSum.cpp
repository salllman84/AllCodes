#include<iostream>
#include<vector>
using namespace std;

// Function to find a pair with a given sum and return their indices // timecomplexity = o(n- square)
vector<int> PairSum(const vector<int>& Vec, int target) {
    vector<int> ans;
    for(int i = 0; i < Vec.size(); i++) {
        for(int j = i + 1; j < Vec.size(); j++) {
            if(Vec[i] + Vec[j] == target) {
                ans = {i, j}; // Return the indices instead of values
                return ans;
            }
        }
    }
    return {}; // Return an empty vector if no pair is found
}

int main() {
    vector<int> Vec = {2, 4, 5, 14, 11, 25, 36};
    int target = 36;

    vector<int> pairIndices = PairSum(Vec, target);
    
    // if(!pairIndices.empty()) {
        cout << "Indices of the pair: " << pairIndices[0] << " and " << pairIndices[1] << endl;
        cout << "Values: " << Vec[pairIndices[0]] << " + " << Vec[pairIndices[1]] << " = " << target << endl;
    //} else {
        // cout << "No pair found for the sum " << target << endl;
   // }

    return 0;
}
