#include<iostream>
using namespace std;

template <class temp>
temp FindExponent(temp a, temp b, temp c=0){
    int result=1;
    for(int i=1; i<=b; i++){
        result*=a;
    }

    return result;
}

int main(){
    cout<<"Exponential Power of integer: "<<FindExponent(10,3)<<endl;
    cout<<"Exponential Power of float: "<<FindExponent(10.5, 3.5, 4.5)<<endl;
    cout<<"Exponential Power of Double: "<<FindExponent(10.5943,3.59999, 4.5768);

    return 0;
}