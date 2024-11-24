#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int>MejorityEle(vector<int>Vec, int size){
    sort(Vec.begin(), Vec.end());
    int prequency=1,ans=Vec[0];
    for(int i=0; i<size; i++){
        if(Vec[i]==Vec[i+1]){
            prequency++;
        }else{
            prequency=1;
             ans= Vec[i];
         }
        if(prequency > size/2){
            return {i};
            //break;
        }
    }
return {};
}

int main(){
    vector<int>Vec={1,4,1,8,3,1,1,2,1,1};
    int size=Vec.size();

    vector<int>M_Ele = MejorityEle(Vec, size);
    cout<<"majority element is on index : "<<M_Ele[0];
    // it became sorted and
    // when the value of (i) reached from 0 to 4 index it satisfy that
    // (prequency>=n/2) * because where prequency is updated in each interation
    // which satisty the condition  where we return the value of (i=4)

    return 0;
}