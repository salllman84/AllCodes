#include<iostream>
using namespace std;

int main(){

    int arr[3], max;
    bool found=false;

    for(int i=0; i<3; i++){
        cout<<"Enter number in "<<i+1<<" row: ";
        cin>>arr[i];
        cout<<endl;
    }

    cout<<"\nEnter number to find location = ";
    cin>>max;

    for(int i=0; i<3; i++){
        if (max==arr[i]){
            found=true;
            cout<<max<<" is stored in index number "<<i;
        }
    }

    if(!found){
        cout<<"Not found";
    }

    return 0;
}