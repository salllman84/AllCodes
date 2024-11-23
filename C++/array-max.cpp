#include<iostream>
using namespace std;

int main(){
    int a[3], max;

    for (int i=0; i<3; i++){
        cout<<"Enter value number "<<i+1<<" : ";
        cin>>a[i];
    }
    max=a[2];
    for (int i=0; i<=3;  i++){
        if (max<a[i]){
            max=a[i];
        }
    }
    cout<<"maximum value is "<<max;
    
}