#include<iostream>
using namespace std;

// Multiplication

class product{
    int a, b;

    public:
    void getdata();
    void givedata();
};

void product::getdata(){
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
}

void product::givedata(){
    cout<<"Product = "<<a*b<<endl;
}

int main(){
    product mult;
    mult.getdata();
    mult.givedata();

    return 0;
}