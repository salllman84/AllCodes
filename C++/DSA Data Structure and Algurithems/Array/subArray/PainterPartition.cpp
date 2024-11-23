#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool IsPossible(vector<int> &arr, int n, int m, int  MaxAllowedTime){
      int painters = 1, time = 0;

      for(int i=0; i<n; i++){
            if(arr[i] > MaxAllowedTime){
            return false;
            }
            if((time + arr[i]) <= MaxAllowedTime){
            time += arr[i];
      } else{
            painters++;
            time += arr[i];
      }
   }
   return painters <= m;
}

int minTimeTopaint(vector<int> &arr, int n, int m){
      int sum = 0, MaxVal = INT_MIN;
      for(int i=0; i<n; i++){
            sum += arr[i];
            MaxVal = max(MaxVal, arr[i]);
      }
      int start = MaxVal, end = sum, ans = -1;
      while(start <= end){
            int mid = start + (end-start)/2;
            if(IsPossible(arr, n, m, mid)){
                  ans = mid;
                  end = mid-1;
            } else{
                  start = mid+1;
            }
      }
    return ans;
}

int main(){
      vector<int> Vec = {40, 30, 10, 20};
      int n = 4, m = 2;

      cout<<minTimeTopaint(Vec, n, m) << endl;

      return 0;
}