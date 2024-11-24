#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int MaxWater(vector<int> Vec){
    int MaximumWater= 0;
    for(int i=0; i<Vec.size(); i++){
        for(int j=i+1; j<Vec.size(); j++){
            int width= j-i;
            int height = min(Vec [i], Vec[j]);
            int currentWater = width*height;
            MaximumWater = max(MaximumWater, currentWater);
        }
    }
    return MaximumWater;
}

int main(){
    vector<int> Vec = {1,8,6,2,5,4,8,3,7};
    int ans = MaxWater(Vec);
    cout<<"Maximum Water = "<<ans;

    return 0;
}