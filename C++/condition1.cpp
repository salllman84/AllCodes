#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(a%3==0){
        cout<<"the number is divisible by three";
    }
    else{
        cout<<"not divisible by three";
    }

    return 0;
}