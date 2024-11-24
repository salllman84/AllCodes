#include<iostream>
using namespace std;

class A{
    public:
    void Aa(){
        cout<<"Base Class A\n";
    }
};

class B{
    public:
    void Aa(){
        cout<<"Base Class B\n";
    }
};
class C:public A, public B{
    public:
    void Aa(){
        cout<<"Derived Class C\n";
    }
};

int main(){
    C bb;

    // 1. bb.Aa(); // it will call derived class member function (Aa) b/c the object is of Derived Class.

    // 2. bb.A::Aa(); // it will call Base Class (A) b/c bb (object) assigned to (A) class of m.fuction (Aa).

    // 3. bb.B::Aa(); // it will Call Base Class (B) b/c bb (object) assigned to (B) Class of member function (Aa)
    
    // 4.

    // bb.A::Aa();
    // bb.B::Aa();
    // bb.Aa();

    return 0;
}