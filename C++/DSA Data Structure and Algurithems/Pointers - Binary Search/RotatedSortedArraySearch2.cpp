#include<iostream>
#include<vector>
using namespace std;

int FindTargetInSortedArr(vector<int> &nums, int target){
    int start = 0, End = nums.size()-1;
    while (start <= End){
        int Mid = start + (End - start)/2;
        if (nums[Mid] == target){
            return Mid;
        } else if(nums[Mid] >= target){
            if(nums[start] <= target){
                End = Mid-1;
            } else{
                start = Mid+1;
            }
        } else if(nums[Mid] <= target){
            if(target < End){
                start = Mid+1;
            } else{
                End = Mid-1;
            }
        }
    }
    return -1;
    
}

int main(){
    vector<int> Arr = {11, 12, 13, 15, 17, 6, 7, 8, 9, 10};
    int target = -8;
    cout<<"Target Value is on index number : "<<FindTargetInSortedArr(Arr, target);

    return 0;
}