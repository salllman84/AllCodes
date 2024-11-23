#include<iostream>
#include<vector>
using namespace std;

int FindPeakOfArr(vector<int> Arr){
    int start = 0,      End = Arr.size()-1;

    for(;start <= End;){
        int mid = start + (End - start)/2;
        if(Arr[mid-1] < Arr[mid] && Arr[mid] > Arr[mid+1]){
            return mid;
        } else if(Arr [mid-1] < Arr [mid]){
            start = mid+1;
        } else if(Arr[mid-1] > Arr[mid]){
            End = mid - 1;
        }
    }

    return -1;
}

int main(){
    vector<int> Arr = {5,6,7,8,9,10,4,3,2,1};
    cout<<FindPeakOfArr(Arr);

    return 0;
}