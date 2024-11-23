#include<iostream>
using namespace std;


void SortArray(int Array []){
    int temp;

    for(int i=4; i>=0; i--){
        for(int j=0; j<i; j++){
            if (Array[j]>Array[j+1]){
            temp=Array[j];
            Array[j]=Array[j+1];
            Array[j+1]=temp;
            }
        }
    }

    cout<<"\nSorted Array = { ";
    for(int k=0; k<4; k++){
        cout<<Array[k]<<",";
    }
    cout<<" }";
}

int main(){
    int Array[]={23,33,11,55};
    cout<<"Unsorted Array = { ";
    for(int i=0; i<4; i++){
        cout<<Array[i]<<",";
    }
    cout<<" }\n";

    SortArray(Array);
}