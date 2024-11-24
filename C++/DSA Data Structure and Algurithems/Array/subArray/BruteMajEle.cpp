#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// Time Complexity O(n^2)
vector<int>MajorityEle(vector<int>Arr, int size){
    int prequency=1;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<=size; j++){
            if(Arr[i]==Arr[j]){
                prequency++;
            } if(prequency>=size/2){
                return {i};
                break;
            }
        }
        prequency=1;
    }
    return {};
}

int main(){
    vector<int>Arr={1,2,3,4,2,2,2,6,3};
    int size= Arr.size();

    vector<int>M_Ele = MajorityEle(Arr, size);
    cout<<"Majority Element is at Index : "<<M_Ele[0];

    return 0;
}