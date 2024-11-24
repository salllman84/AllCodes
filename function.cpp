#include<iostream>
using namespace std;

int add(int a, int b, int c){
    int sum=a+b+c;
    return sum;
}

double add(double e,double d){
    double sum=e+d;
    return sum;
}
int mult(int mult1, int mult2, int mult3){
    int multiply=mult1*mult2*mult3;
    return multiply;
}
double divide(double div1, double div2){
    double divide = div1/div2;
    return divide;
}

int main(){

    // integer addition values
    cout<<"Enter the first value to add :";
    cin>>a;

    // double additon values
    double e=4.53;
    double d=5.33;

    // integer multiplication

    int mult1=4;
    int mult2=4;
    int mult3=4;

    // devide by
    int div1=11;
    int div2=44;

    cout<<"The sum of all values are: "<<add(a,b,c)<<endl;
    cout<<"The float value of all are: "<<add(e,d)<<endl;
    cout<<"The multiplication value of all arguments are: "<<mult(mult1,mult2,mult3)<<endl;
    cout<<"The division is equal to: "<<divide(div1, div2)<<endl;
}