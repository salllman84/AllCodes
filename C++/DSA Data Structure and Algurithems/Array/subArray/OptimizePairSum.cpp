#include<iostream>
#include<vector>
using namespace std;

vector<int>PairSum(vector<int>Vec, int size, int target){
    vector<int>Sum;
    int start=0, end=size-1;

/*
    int pairSum= Vec[start]+Vec[end];
    if(pairSum==target){
    Sum={start, end};
    } else if(pairSum<target){
    start++;
    } else{
    end--;
    }
*/


    for(;start<end;){
        /*if(Vec[start]+Vec[end] == target){
            Sum={start, end};
            return Sum;
        }else if(Vec[start]+Vec[end]<target){
            start++;
        }else if(Vec[start]+Vec[end]){
            end--;
        }
        */
       int pairSum= Vec[start]+Vec[end];
        if(pairSum==target){
            Sum={start, end};
        } else if(pairSum<target){
            start++;
        } else{
            end--;
            }
    }
    return Sum;
}
int main(){
    vector<int>Vec={1,2,3,4,6,9,23};
    int size=Vec.size();
    int target=32;

    vector<int>pairSum=PairSum(Vec, size, target);
    cout<<pairSum[0]<<" "<<pairSum[1]; // this fun.. only return two values. that's why we write indeices[0, 1]

    return 0;
}