#include<iostream>
using namespace std;

int addition(int a, int b){
    a=44;
    b=55;
    int sum=a+b;
    return sum;
};

int main(){
    int a,b;
    a=11;
    b=22;

    int sum=addition (a,b);
    cout<<sum;

    return 0;
}