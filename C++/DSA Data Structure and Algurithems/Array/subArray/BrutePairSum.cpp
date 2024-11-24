#include<iostream>
#include<vector>
using namespace std;
// (n^2)
vector<int> PairSum(vector<int>vec, int size, int target){
    vector<int>Sum;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(vec[i]+vec[j] == target){
                Sum= {i,j};
                return Sum;
            }
        }
    }
    return Sum;
}

int main(){
    vector<int>Vec={1,2,3,4,6,9,23};
    int size=Vec.size();
    int target=32;

    vector<int>pairSum= PairSum(Vec, size, target);
    cout<<pairSum[0]<<" "<<pairSum[1];

    return 0;
}