#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool IsValid(vector<int> Partition, int TotalPartition, int TotalPainters, int MaxTime){
    int NewPainter = 1, TimeTaken = 0;
    for(int i=0; i<TotalPartition; i++){
        if(Partition[i] > MaxTime){
            return false;
        } else if(TimeTaken + Partition[i] <= MaxTime){
            TimeTaken += Partition[i];
        } else{
            NewPainter ++;
            TimeTaken = Partition[i];
        }
    }
    return NewPainter > TotalPainters ? false : true;
}

int PainterPartition(vector<int> Partition, int TotalPartition, int TotalPainters){
    int MinTime = INT_MIN, MaxTime =  0;
    for (int i = 0; i<TotalPartition; i++){
        MaxTime += Partition[i];
        MinTime = max(MinTime, Partition[i]);
    }
    int start = MinTime, end = MaxTime, ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(IsValid(Partition, TotalPartition, TotalPainters, mid)){
            ans = mid;
            end = mid-1;
        } else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> partition = {40, 20, 10, 30};
    int TotalPaints = 4;
    int painters = 3;

    cout<<PainterPartition(partition, TotalPaints, painters) <<endl;

    return 0;
}