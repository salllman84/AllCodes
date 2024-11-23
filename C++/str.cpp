#include<iostream>
using namespace std;

struct employee{
    string name;
    int age;
};

int main(){
    employee emp1, emp2;
    cout<<"Enter name : ";
    cin>>emp1.name;
    cout<<"Enter age of "<<emp1.name<<" : ";
    cin>>emp1.age;

    emp2.name=emp1.name;
    emp2.age=emp1.age;

    cout<<"name of emp2 is = "<<emp2.name<<endl;
    cout<<"age of "<<emp2.name<<" = "<<emp2.age;

}