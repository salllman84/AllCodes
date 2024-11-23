// Question number 7 Exe 8.

#include<iostream>
using namespace std;

class Factorial{
    int factorialOf;
    int factorial;
    public:
    Factorial(int n){
        this->factorialOf=n;
        factorial=1;
        for(int i=n; i>0; i--){
            factorial *=i;
        }
    }
    void Getfact(){
        cout<<"factorial of "<<factorialOf<<" : "<<factorial;
    }
};

class FindSum{
    int sum=0;
    public:
    FindSum(int a, int b, int c){
        sum=a+b+c;
    }
    void GetSum(){
        cout<<"Sum: "<<sum;
    }
};

int main(){
    Factorial factOf(5);
    factOf.Getfact();
    cout<<endl;
    FindSum num(23, 33, 30);
    num.GetSum();
}