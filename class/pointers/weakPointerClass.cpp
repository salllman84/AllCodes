#include<iostream>
#include<memory>
using namespace std;

class MyClass{
    public:

    MyClass(int a, int b){
        int c=a*b;
        cout<<"Constructor invoked\n";
        cout<<a<<" * "<<b<<" = "<<c<<endl;
    }

    ~MyClass(){
        cout<<"Destructor invoked\n";
    }
};

int main(){
    weak_ptr<int>wePtr1;
    {
        shared_ptr<int>shPtr1 = make_shared<int>(20);
        wePtr1 = shPtr1;
    }
}