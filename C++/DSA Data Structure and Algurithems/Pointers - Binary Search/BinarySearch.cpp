#include<iostream>
#include<vector>
using namespace std;

int FindTargetValue(vector<int> &nums, int target){
    int start = 0, End = nums.size()-1;
    for(;start<=End;){
        // int Mid = (start + End)/2;          // can cause overflow.
        // use this formul
        int Mid = start + (End - start)/2;
        if(target < nums[Mid]){
            End = Mid-1;
        } else if (target > nums[Mid]){
            start = Mid+1;
        } else{
            return Mid;
        }
    }

    return -1;
}

int main(){
    vector<int> Arr={1,2,3,6,7,9,12,14,20};
    int target = 14;

    int result = FindTargetValue(Arr, target);
    cout<<result;

    return 0 ;
}