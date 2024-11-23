#include<iostream>
#include<vector>
using namespace std;

int MejorityEle(vector<int>Vec, int size){
   
    int prequency=0,ans=0;
    for(int i=0; i<size; i++){
        if(prequency==0){
            ans=Vec[i];
        }
        if(ans==Vec[i]){
            prequency++;
         }else{
            prequency--;

        }
    }
return ans;
}

int main(){
    vector<int>Vec={4,1,1,8,3,1,1,2,1,1};
    int size=Vec.size();

    int M_Ele = MejorityEle(Vec, size);
    cout<<"majority element is on index : "<<M_Ele;

    return 0;
}