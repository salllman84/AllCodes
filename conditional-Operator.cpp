#include<iostream>
using namespace std;

int main(){
    int a,b;
    int maximum;
    cout<<"Enter two values : ";
    cin>>a>>b;
    maximum=(a>b)?a:b; // this is Conditional Operator.

// in real
/*
if (a>b){
    cout<<a;
}
else{
    cout<<b;
}*/

    cout<<"The greatest value is : "<<maximum;

    return 0;
}