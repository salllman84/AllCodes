#include<iostream>
using namespace std;

int main(){
    int num=10;
    int* ptr = &num;

    cout<<"Address of "<< *ptr <<" is = "<<ptr;
    cout<<"\nThe value on this address "<<ptr<<" is = "<<*ptr;

    return 0;
}