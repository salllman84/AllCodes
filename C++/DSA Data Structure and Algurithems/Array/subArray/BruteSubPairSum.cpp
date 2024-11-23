#include<iostream>
#include<vector>
using namespace std;

// Time Complexity = O(n^2)

vector<int>PairSum(vector<int>vec, int size, int target){

    for(int start=0; start<size; start++){
        for(int next=start+1; next<size; next++){
            if(vec[start]+vec[next] == target){
                return {start, next};
                break;
            }
        }
    }

    return {};
}

int main(){
    vector<int>Vec={11,2,35,17,20,2};
    int size=Vec.size(), target=31;

    vector<int>pairSum= PairSum(Vec, size, target);
    cout<<pairSum[0]<<" "<<pairSum[1]; // this fun.. only return two values. that's why we write indeices[0, 1]

    return 0;
}