#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

bool IsPossible(vector<int> &arr, int N, int C, int minAllowedDist){
    int Cow = 1, lastStallPos = arr[0];

    for(int i=1; i<N; i++){
        if(arr[i] -lastStallPos >= minAllowedDist){
            Cow++;
            lastStallPos = arr[i];
        }
        if(Cow == C){
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> &arr, int N, int C){
    sort(arr.begin(), arr.end());

    int start = 1, end = arr[N-1] - arr[0], ans = -1;

    while (start <= end){
        int mid = start + (end - start)/2;

        if(IsPossible(arr, N, C, mid)){
            ans = mid;
            start = mid+1;
            
        } else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> StallDis = {1, 2, 8, 4, 9};
    int N = 5;
    int C = 3;

    cout<<getDistance(StallDis, N, C) << endl;

    return 0;
}