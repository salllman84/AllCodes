#include<iostream>
using namespace std;

int RecursiveBinarySearch(int Arr[], int target, int st, int end){
    if(st <= end){
        int mid = st + (end - st)/2;
        if(target < Arr[mid]){
            return RecursiveBinarySearch(Arr, target, st, mid-1);
        } else if(target > Arr[mid]){
            return RecursiveBinarySearch(Arr, target, mid+1, end);
        } else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 6;
    int size = sizeof(arr)/sizeof(arr[0]);
    int end = size, start = 0;
    

    cout<<RecursiveBinarySearch(arr, target, start, end);
    return 0;
}