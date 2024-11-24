#include<iostream>
#include<climits>
using namespace std;

// Time Complexity (n ^ 2)

int MaxSumSubArr(int arr[], int size){
    int CurrentSum=0, MaxSum=INT_MIN;

    for(int start=0; start<size; start++){
        for(int end = start; end<size ; end++){
            CurrentSum+= arr[end];
            MaxSum= max(CurrentSum, MaxSum);
        }
        CurrentSum=0;// reset for next iteration of subArrays.
    }

    return MaxSum;

}

int main(){
    int Arr[]={-2,-4,-5,-3,-9,10,4,3,8}, size;
    size= sizeof(Arr)/sizeof(Arr[0]);

    int MaxSum= MaxSumSubArr(Arr, size);
    cout<<"Max Sum : "<< MaxSum;

    return 0;
}