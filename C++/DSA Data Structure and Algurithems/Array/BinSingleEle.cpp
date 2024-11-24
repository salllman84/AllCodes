#include<iostream>
#include<vector>
using namespace std;

int SingleValue(vector<int> &Vec){
    int start = 0, end = Vec.size()-1;
   
    while(start <= end){
        int mid = start + (end - start)/2;
        // corner case if only one element exist
        if(Vec.size() == 1){
        return Vec[mid];
    }
        if(Vec[mid] != Vec[mid-1] && Vec[mid] != Vec[mid+1]){
            return Vec[mid];
        }
        if(mid % 2 == 0){
            if(Vec[mid] == Vec[mid-1]){
                end = mid-1;
            } else{
                start = mid+1;
            }
        } else{
            if(Vec [mid] == Vec[mid-1]){
                start = mid+1;
            } else{
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main(){
    vector<int> Vec = {1,1,2,2,5,5,8};
    cout<<"mid Odd: "<<SingleValue(Vec)<<endl;

    vector<int> Vec2 = {1,1,3,2,2,5,5,8,8};
    cout<<"Mid Even: "<<SingleValue(Vec2)<<endl;

    vector<int> Vec3 = {1};
    cout<<"One Ele: "<<SingleValue(Vec3);

    return 0;
}