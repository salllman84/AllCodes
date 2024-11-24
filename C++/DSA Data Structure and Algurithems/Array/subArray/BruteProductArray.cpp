#include<iostream>
#include<vector>
using namespace std;

vector<int> ProductExceptSelf(vector<int> &nums){
    int n = nums.size();
    vector<int> Ans(n, 1);  // Initialize the result array with 1

    // Calculate the prefix product
    for (int i = 1; i < n; i++){
        Ans[i] = Ans[i-1] * nums[i-1];
    }

    // Calculate the suffix product
    int suffix = 1;
    for(int i = n-1; i >= 0; i--){  // Fix to include i = 0
        Ans[i] *= suffix;
        suffix *= nums[i];  // Update the suffix product
    }

    return Ans;
}

int main(){
    vector<int> Arr = {1, 2, 3, 4};
    vector<int> Result = ProductExceptSelf(Arr);
    
    // Printing the result
    for(int i = 0; i < Result.size(); i++){
        cout << Result[i] << " ";
    }
    cout << endl;

    return 0;
}
