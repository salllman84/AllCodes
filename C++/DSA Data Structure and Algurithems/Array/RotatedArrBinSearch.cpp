#include<iostream>
#include<vector>
using namespace std;

int FindTargetRotatedArr(vector<int> &Vec, int size, int target){
    int start = 0, end = size-1;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(target == Vec[mid]){
            return mid;
        } else if(Vec[start] < Vec[mid]){
            if(target >= Vec[start] && target <= Vec[mid]){
                end = mid-1;
            } else{
                start = mid+1;
            }
        } else if(Vec[end] > Vec[mid]){
            if(target >= Vec[mid] && target <= Vec[end]){
                start = mid+1;
            } else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> Arr = {4, 5, 6, 7, 1, 2, 3};
    int size = Arr.size();
    int target = 3;

    cout<< FindTargetRotatedArr(Arr, size, target);
    return 0;
}