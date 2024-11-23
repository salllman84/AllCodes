// Find the maximum sum of a Sub Array using kedani Algorithem.

#include<iostream>
#include<vector>
using namespace std;

int FindMaxSum(vector<int> &Vec){
    int CurrentSum=0;
    int MaxSum= Vec[0];

    for(int i=0; i<Vec.size(); i++){
        CurrentSum += i;
        MaxSum = max(CurrentSum, MaxSum);

        if(CurrentSum<0){
            CurrentSum=0;
        }
    }

    return MaxSum;
}


int main(){
    vector<int>Vec={1, 2, 3, 4, 5, -6, -4, 9};

    int maximum= FindMaxSum(Vec);
    cout<<maximum;
    
    return 0;
}