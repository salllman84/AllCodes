#include<iostream>
#include<vector>
using namespace std;

int FindMid (vector<int> nums, int target){
int start = 0, End = nums.size()-1;

for(; start <= End;){
    int mid = start + (End - start)/2;
    if(nums[mid] == target){
        return mid;
    } else if(nums[mid]>target){
        if(nums[start]<=target){
            End = mid-1;
        } else {
            start = mid+1;
        }
    } else{
        if(target <= End){
            start = mid+1;
        } else{
            End = mid -1;
        }
    }
}
return -1;
}

int main(){
    vector<int> Arr = {6, 7 ,8 ,9, 10, 1, 2, 3, 4, 5};
    int target = 3;

    cout<<FindMid(Arr, target);

    return 0;
}