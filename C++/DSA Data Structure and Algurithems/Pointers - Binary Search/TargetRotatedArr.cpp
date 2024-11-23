#include<iostream>
#include<vector>
using namespace std;

int FindTargetInRotatedSortArr(vector<int> num, int target){
    int st = 0;
    int end = num.size()-1;

    while(st <= end){
        int mid = st + (end - st)/2;
        if(num [mid] == target ){
            return mid;
        } else if (num[mid]<=target){
            if(num[end] >= target){
                st = mid+1;
            } else{
                end = mid-1;
            }
        } else{
            if(num[st]<=target){
                end = mid-1;
            } else{
                st = mid+1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> Arr = {5, 6, 7, 8, 9, 10, 0, 1, 2, 3, 4};
    int target = 5;
    cout<<FindTargetInRotatedSortArr(Arr, target);

    return 0;
}