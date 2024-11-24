#include<iostream>
using namespace std;

// Structure   Question.


struct studentdata{
    string name;
    int roll;
    int marks;
    string address;

};

int main(){
    studentdata std1;
    cout<<"Enter stduent first name : ";
    cin>>std1.name;

    cout<<"Enter "<<std1.name<<" roll number : ";
    cin>>std1.roll;

    cout<<"Enter total marks of "<<std1.name<<" : ";
    cin>>std1.marks;

    cout<<"Enter the address of "<<std1.name<<" : ";
    cin>>std1.address;
    cout<<endl<<endl;

    cout<<"Name                     : "<<std1.name<<endl;
    cout<<std1.name<<" Roll number  : "<<std1.roll<<endl;
    cout<<std1.name<<" Total marks  : "<<std1.marks<<endl;
    cout<<std1.name<<" Address      : "<<std1.address;

    return 0;
}
