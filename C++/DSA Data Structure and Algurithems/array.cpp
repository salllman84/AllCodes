#include<iostream>
using namespace std;

int main(){
    int array[6];
    for(int i=2; i<6; i++){
        if(i<6){
            cout<<"Enter Value in "<<i+1<<" : "; cin>>array[i];
        }
    }
            cout<<"array is full";
}