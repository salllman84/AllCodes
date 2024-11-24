#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

bool IsPossible(vector<int> &StallDis, int totalCow, int CurrentCow, int MaxAllowedDis){
    int CurrCow = 1, CurrentDis = StallDis[0];
    for(int i=1; i < totalCow; i++){
        if(CurrCow > CurrentCow){
            return false;
        } else if(StallDis[i] - CurrentDis <= MaxAllowedDis){
            CurrentDis = StallDis[i] - CurrentDis;
        } else{
            CurrCow ++;
            CurrentDis = StallDis[i];
        }
    }
    return CurrCow > CurrentCow ? false : true;
}

int CowAllocation(vector<int> &StallDis, int totalCow, int CurrentCow){
    sort(StallDis.begin(), StallDis.end());
    int MinDis = INT_MAX, MaxDis = INT_MIN;

    for(int i=0; i<totalCow; i++){
        MinDis = min(MinDis, StallDis[i]);
        MaxDis = max(MaxDis, StallDis[i]);
    }
    int start = 1, end = StallDis[totalCow-1] - StallDis[0], ans = -1;

    while(start <= end){
        int Mid = start + (end - start)/2;
        if (IsPossible (StallDis, totalCow, CurrentCow, Mid)){
            ans = Mid;
            end = Mid-1;
        } else{
            start = Mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> StallDis = {1, 2, 8, 4, 9};
    int TotalCow = 5;
    int CurrentCow = 3;

    cout<<CowAllocation(StallDis, TotalCow, CurrentCow) << endl;

    return 0;
}