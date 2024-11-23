#include<iostream>
using namespace std;


void Calculator(int num1, char Operator, int num2){
    switch (Operator)
    {
    case '+':
        cout<<num1<<" + "<<num2<<" = "<<num1+num2;
        break;
    case '-':
        cout<<num1<<" - "<<num2<<" = "<<num1-num2;
        break;
    case '*':
        cout<<num1<<" x "<<num2<<" = "<<num1*num2;
        break;
    case '/':
        cout<<num1<<" / "<<num2<<" = "<<num1/num2;
        break;
    default:
        break;
    }
}

int main(){
    int num1, num2;
    char Operator;
    cout<<"Enter first number\n";
    cin>>num1;

    cout<<"Enter '+', '-', 'x', '/' \n";
    cin>>Operator;

    cout<<"Enter second number\n";
    cin>>num2;

    Calculator(num1, Operator, num2);

}