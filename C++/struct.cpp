#include<iostream>
using namespace std;

struct data
{
    char name[20];
    string phone;
    char city[20];
};

int main(){
    data student;
    cout<<"Enter the name of the student = ";
    cin>>student.name;
    cout<<"Enter city name of "<<student.name<<" = ";
    cin>>student.city;
    cout<<"Enter phone number of "<<student.name<<" = ";
    cin>>student.phone;



    cout<<endl<<endl;

    cout<<"Name = "<<student.name<<endl;
    cout<<"City = "<<student.city<<endl;
    cout<<"Phone = "<<student.phone;

    return 0;
}