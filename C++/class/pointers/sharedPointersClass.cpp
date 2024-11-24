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
    shared_ptr<data type... (Myclass)>pointer Name... (unPtr1) = make_shared(this is a keyword)
    <data type (MyClass)>(our constructor accept two parameters 12,12 if not leave empty);
    */
    
    shared_ptr<MyClass>unPtr1 = make_shared<MyClass>(12,12);
    // to find who use this location.
    cout<<"Shared Memory Addresss: "<<unPtr1.use_count()<<endl; // use_count is a keyword.
    shared_ptr<MyClass>unPtr2 = unPtr1;
    cout<<"Shared memory Address: "<<unPtr2.use_count()<<endl;
    cout<<"Shared memory Address: "<<unPtr1.use_count()<<endl;

    // if we another block of code.
    {
        cout<<"Shared memory Address: "<<unPtr2.use_count()<<endl;
        cout<<"Shared memory Address: "<<unPtr1.use_count()<<endl;
    }
        cout<<"Shared memory Address: "<<unPtr1.use_count()<<endl;
    

return 0;

}