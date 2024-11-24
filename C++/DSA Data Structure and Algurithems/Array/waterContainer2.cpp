#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int MaxWater(vector<int> Vec){
    int MaxWaterArea = 0;
    for(int i=0; i<Vec.size(); i++){
        for(int j=i+1; j<Vec.size(); j++){
            int Area = j-i;
            int Height = min (Vec[i], Vec[j]);
            int MaxArea = Area * Height;
            MaxWaterArea = max(MaxArea, MaxWaterArea);
        }
    }
    return MaxWaterArea;
}

int main(){
    vector<int> Arr={1,8,6,2,5,4,8,3,7};
    int MaxArea = MaxWater (Arr);
    cout<<"Maximum Area Which can store Maximum Water : "<<MaxArea;

    return 0;
}