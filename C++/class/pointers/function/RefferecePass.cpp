#include<iostream>
using namespace std;

int FactorialOf(int& number){
    int Factorial = 1;
    for(int i=number; i>0; i--){
        Factorial*=i;
    }
    return Factorial;
}

int main(){
    int Num;
    cout<<"Enter Number to find Factorial: "; cin>>Num;
    int factorial = FactorialOf(Num);
    cout<<"Factorial of "<<Num<<" is = "<<factorial;

    return 0;
}