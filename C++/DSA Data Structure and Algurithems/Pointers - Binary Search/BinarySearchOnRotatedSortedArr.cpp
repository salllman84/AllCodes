#include<iostream>
#include<vector>
using namespace std;

int FindTarget(int nums[], int size, int target){
    int start = 0, End = size-1;
    while (start <= End){
        int mid = start + (End - start)/2;
        if(nums[mid] == target){
            return mid;
        } if(nums [mid]>= target){
            if(nums[start] <= target){
                End = mid-1;
            } else{
                start = mid+1;
            }
        } else if(nums[mid]<=target){
            if(nums[End] >= target){
                start = mid+1;
            } else{
                End = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int Arr[] = {9, 10, 15, 21, 25, 27, 0, 1, 2, 3, 4, 5, 6 ,7};
    int size = sizeof(Arr)/sizeof(Arr[0]);
    int target = 7;

    cout<<FindTarget(Arr, size, target);

    return 0;
}