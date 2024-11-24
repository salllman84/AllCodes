#include<iostream>
using namespace std;

float KiloToGram(int w1){
    float WeightInGram=w1*1024;
    return WeightInGram;
}

int main(){
    float Kg;
    cout<<"Enter weight in Kg: ";cin>>Kg;
    cout<<"Weight in Gm: "<<KiloToGram(Kg)<<" gm";

    return 0;
}