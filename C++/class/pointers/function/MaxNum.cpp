#include<iostream>
using namespace std;

int MaxNumber(int a, int b){
    int max=0;
    if (a>b){
        max=a;
        return max;
    }
    else{
        max=b;
        return max;
    }
}

int main(){
    cout<<"Enter 2 Numbers to find greatest number below.\n";
    int num1, num2;

    cout<<"Enter first integer: \n";cin>>num1;
    cout<<"Enter second integer:\n";cin>>num2;

    cout<<"Maximum number is: "<<MaxNumber(num1, num2);
}
