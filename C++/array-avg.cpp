#include<iostream>
using namespace std;

int main(){
    
    int sub[5];
    float sum,avg;
    int i;

    for(i=0; i<5; i++){
        cout<<"Enter value into subject number "<<i+1<<" : ";
        cin>>sub[i];
    }
    for (i=0; i<5; i++){
        sum+=sub[i];
        avg=sum/5.0;
    }
    cout<<"Sum = "<<sum<<endl;
    cout<<"average = "<<avg;


    return 0;
}