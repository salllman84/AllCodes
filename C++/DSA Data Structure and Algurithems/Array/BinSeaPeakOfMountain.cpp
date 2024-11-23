#include<iostream>
#include<vector>
using namespace std;

int PeakIndex(vector<int> &Peak){
    int start = 0, end = Peak.size() - 1;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(Peak[mid-1] <= Peak[mid] && Peak[mid] >= Peak[mid+1]){
            return mid;
        } else if(Peak[mid] <= Peak[mid-1]){
            end = mid - 1;
        } else{
            start = mid + 1;
        } if(Peak[mid] <= Peak[mid+1]){
            start = mid + 1;
        } else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> Arr = {0, 3, 8, 9, 10, 2, 1};

    cout<<PeakIndex(Arr);

    return 0;
}