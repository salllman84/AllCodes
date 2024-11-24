#include<iostream>
using namespace std;

struct student
{
    string name;
    int age;
};

student stData(){
    student s2;
    cout<<"Enter student name: ";cin>>s2.name;
    cout<<"Enter student age: ";cin>>s2.age;

    return s2;
}

int main()
{
    student s1;
    s1 = stData();
    cout<<"\nname: "<<s1.name<<"\n";
    cout<<"age:  "<<s1.age<<"\n";
}