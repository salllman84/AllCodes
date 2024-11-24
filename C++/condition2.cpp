#include<iostream>
using namespace std;

// Find Bill

int main(){
    float bill;

    cout<<"Enter your bill units : ";
    cin>>bill;

    if(bill<=300){
        bill=bill*3;
        cout<<"Bill = "<<bill;
    }
    else{
        bill=(bill*3.5)+(bill*0.05)/100;
        cout<<"Bill = "<<bill;
    }

    return 0;
}