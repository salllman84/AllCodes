#include<iostream>
using namespace std;
// O(log n) Time Complexity
int FindPower(int, int);

int main(){
    int number=23, p=2;
    int Answer = FindPower(number, p);
    cout<<number<<"^"<<p<<" : "<<Answer;

    return 0;
}

int FindPower(int n, int p){
    int Answer = 1;
    int Binary = p;

    for(;Binary>0;){
        if(Binary%2==1){
            Answer*=n;
        }
        n*=n;
        Binary/=2;
    }
    return Answer;
}