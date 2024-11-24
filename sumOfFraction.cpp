#include<iostream>
using namespace std;

int main(){
    float num, sum;
    cout<<"Enter a number ";
    cin>>num;
    sum = 0.0;
    for(int i=1; i<10; i++){
        sum = sum+num/i;
        cout<<"Sum of seriese : "<<sum<<endl;
    }
    
return 0;
}