#include<iostream>
#include<climits>
using namespace std;

int MaxSubSum(int arr[], int size){
    int CurrentSum=0, MaxSum= INT_MIN;
    for(int i=0; i<size; i++){
        CurrentSum+= arr[i];
        MaxSum= max(CurrentSum, MaxSum);
        if(CurrentSum<0){
            CurrentSum=0;
        }
    }

    return MaxSum;
}

int main(){
    int Arr[]= {-2,-4,-5,-3,-9,10,4,3,8}, size;
    size= sizeof(Arr)/sizeof(int);
    int maxSum= MaxSubSum(Arr, size);

    cout<<maxSum;
    return 0;
}