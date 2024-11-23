#include<iostream>
using namespace std;

int sum(int num1, int num2, int num3){

    int add=(num1+num2+num3);
    return add;
}

int mult(int num1, int num2, int num3){
    int result=(num1*num2*num3);
    return result;
}

int max(int num1, int num2, int num3){

    if(num1 > num2 && num1 > num3){
        return num1;
    }
    else if(num2 > num1 && num2 > num3){
        return num2;
    }
    else {
        return num3;
    }
}

int main(){

int num1, num2, num3;

cout<<"Enter first value : ";
    cin>>num1;
    cout<<"Enter second value : ";
    cin>>num2;
    cout<<"Enter third value : ";
    cin>>num3;


cout<<sum(num1, num2, num3)<<endl;
cout<<endl;
cout<<endl;
cout<<mult(num1, num2, num3)<<endl;
cout<<endl;
cout<<endl;
cout<<max(num1, num2, num3)<<endl;
    return 0;
}