#include<iostream>
#include<climits>
using namespace std;

// Time Complexity o(n ^ 3) // using three loops
void NumberOfSubArray(int arr[], int size){
    int Sum, MaxSum=INT_MIN;
    for(int start=0; start<size; start++){
        for(int end=start; end<=size; end++){
            Sum=0; // reset sum in each iteration to find the maxSum of each subArray
            for(int val=start; val<end; val++){
                Sum+=arr[val];
                MaxSum=max(Sum, MaxSum);
            }
        }
    }
    cout<<"Miximum Sum: "<<MaxSum;
}

int main(){
    int Arr[]={1,2,3,4,5,6};
    int size=sizeof(Arr)/ sizeof(int); 
    NumberOfSubArray(Arr, size);


    return 0;
}