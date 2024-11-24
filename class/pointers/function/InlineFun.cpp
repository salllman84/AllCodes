#include<iostream>
using namespace std;

inline int FindExponent(int number, int power){
    int result=1;

    for(int i=1; i<=power; i++){
        result*=number;
    }

    return result;
}

int main(){
    int Num, Exponent;
    cout<<"Enter number to find exponential Value: ";cin>>Num;
    cout<<"Enter exponential Power of "<<Num<<": ";cin>>Exponent;

    int Result= FindExponent(Num,Exponent);
    cout<<"Value of "<<Num<<" raise to the power "<<Exponent<<" = "<<Result;

    return 0;
}