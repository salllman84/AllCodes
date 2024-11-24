#include<iostream>
#include<vector>
using namespace std;

int PeakInArray(vector<int> A){
    int start = 0;
    int End = A.size()-1;

    while (start <= End){
        int mid = start + (End - start)/2;
        if (A[mid-1] < A[mid] && A[mid] > A[mid+1]){
            return mid;
        } else if(A[mid-1] > A[mid]){
            End = mid-1;
        } else if(A[mid-1] < A[mid]){
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    vector<int>Vec = {5,6,7,8,9,10,4,3,2,1};
    int result = PeakInArray(Vec);
    cout<<"Peak of Vector is it index : "<<result << endl;

    return 0;
}