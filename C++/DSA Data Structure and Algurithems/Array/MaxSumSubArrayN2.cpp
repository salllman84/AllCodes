#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// by using brute force algorithem using o(n square) time complexity
int MaxSumOfSubArr(vector<int> &Vec){
    int CurrentSum=0, MaxSum=INT_MIN;
    for(int start=0; start<Vec.size(); start++){ // To find the starting point
        // update sum in each iteration to find max sum of each sub-Array.
        CurrentSum=0;
        for(int end=start; end<Vec.size(); end++){
            CurrentSum+=Vec[end];
            MaxSum= max(CurrentSum, MaxSum);
        }
    }
    return MaxSum;
}

int main(){
    vector<int>Vec={1,2,3,10,-6, 8,9, -1, 4};
    int maxsum= MaxSumOfSubArr(Vec);
    cout<<maxsum;
}