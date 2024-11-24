#include<iostream>
using namespace std;

struct exam
{
    char name[20];
    int roll_no;
    char section;
    
};
int main(){
    exam student;

    cout<<"Enter name of the student = ";
    cin>>student.name;
    cout<<"Enter roll number of "<<student.name<<" = ";
    cin>>student.roll_no;
    cout<<"enter the section of the "<<student.name<<" = ";
    cin>>student.section;

cout<<"Name = "<<student.name<<endl;
cout<<"roll number = "<<student.roll_no<<endl;
cout<<" section = "<<student.section;


    return 0;
}