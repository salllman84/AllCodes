#include<iostream>
using namespace std;

struct Student
{
    string name, address;
    int age;
};

void StudentData(Student a){
    cout<<"Name: "<<a.name<<"\n";
    cout<<a.name<<" address: "<<a.address<<"\n";
    cout<<a.name<<" age:     "<<a.age;
}

int main(){
    Student std1;
    cout<<"Enter Student name: ";cin>>std1.name;
    cout<<"\nEnter "<<std1.name<<" age: ";cin>>std1.age;
    cout<<"\nEnter "<<std1.name<<" address: ";cin>>std1.address;

    StudentData(std1);
}