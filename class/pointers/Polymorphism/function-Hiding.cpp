// function overRiding & Function Hiding

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void inputData()
    {
        cout << "Enter a Number in A: ";
        cin >> a;
    }

    void outputA()
    {
        cout << "Number in A: " << a << endl;
    }
};

class B
{
    int b;

public:
    void inputData()
    {
        cout << "Enter a Number in B: ";
        cin >> b;
    }

    void outputB()
    {
        cout << "Number in B: " << b << endl;
    }
};

class C : public A, public B
{
    int c;

public:
    using A::inputData;
    using B::inputData;
    void inputData(int a)
    {
        c = a;
    }

    void outputC()
    {
        cout << "Number in C: " << c << endl;
    }
};

int main()
{
    C Cc;

    Cc.A::inputData(); // Calls inputData from class A
    // int a;
    // cout<<"Enter vlaue in C: ";
    // cin>>a;
    // pass (a) instead (5).
    Cc.inputData(5);   // Calls inputData from class C
    Cc.B::inputData(); // Calls inputData from class B

    Cc.outputA(); // Outputs the value of a
    Cc.outputB(); // Outputs the value of b
    Cc.outputC(); // Outputs the value of c
}
