#include<iostream>
#include<vector>
using namespace std;

bool IsValid(vector<int> & Arr, int n, int m, int MaxPageAllocate){
    int student = 1, pages = 0;

    for (int i=0; i<n; i++){
        if(Arr[i] > MaxPageAllocate){
            return false;
        } if (pages + Arr[i] <= MaxPageAllocate){
              pages += Arr[i];
        } else{
            student ++;
            pages = Arr[i];
        }
    }

    /*if(student <= m){
        return true;
    } else{
        return false;
    } */
    
    return student <= m ? true : false;
}

int AllocatBooks(vector<int> &Arr, int n, int m){
    if(m > n){
        return -1;
    }

    int sum = 0;
    for( int i=0; i<n; i++){
        sum += Arr[i];
    }
    int ans = -1;
    int start = 0, end = sum;

    while (start <= end)
    {
        int mid = start + (end - start)/2;

        if(IsValid(Arr, n, m, mid)){ // left
            ans = mid;
            end = mid-1;
        } else{ // right
            start = mid+1;
        }
    }
    return ans;
    
}

int main(){
    vector<int> Arr = {10, 15, 25, 11, 12, 20};
    int n = 6, m = 3;

    cout<<AllocatBooks(Arr, n, m) << endl;

    return 0;
}
