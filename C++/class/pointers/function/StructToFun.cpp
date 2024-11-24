#include<iostream>
using namespace std;

struct Student
{
    string name;
    int age;
};

void StudentRec(Student s1){
    cout<<"Student name is: "<<s1.name<<"\n";
    cout<<"Age of "<<s1.name<<" is: "<<s1.age;
}

int main(){
    Student s1;
    cout<<"Enter name of the student: ";cin>>s1.name;
    cout<<"Enter age of the "<<s1.name<<": ";cin>>s1.age;

    StudentRec(s1);

    return 0;
}