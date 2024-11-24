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

    /*
    syntax
    unique_ptr<data type... (Myclass)>pointer Name... (unPtr1) = make_unique(this is a keyword)
    <type of data (MyClass)>(our constructor accept two parameters 12,12 if not leave empty);

    unique pointers couldn't be shared to another object/variable. // unPtr2 = unptr1;
    */
    unique_ptr<MyClass>unPtr1 = make_unique<MyClass>(12,12);
    // unique_ptr<MyClass>unPtr2 = unptr1;          // it will show error.
    unique_ptr<MyClass>unPtr2 = move(unPtr1);       // it will work properly when use (move) keyword.

}