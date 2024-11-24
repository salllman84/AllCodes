#include<iostream>
using namespace std;

struct data
{
    string name;
    int marks[5];
    int total;
};

int main(){
data student;
cout<<"please enter name of the student = ";
cin>>student.name;

student.total=0;
for(int i=0; i<5; i++){
    cout<<"Please enter marks in subject ["<<i+1<<"] = ";
    cin>>student.marks[i];
    student.total+=student.marks[i];
}

cout<<"Name = "<<student.name<<endl;
for (int i = 0; i < 5; i++)
{
    cout<<"marks in subject "<<i+1<<" = "<<student.marks[i]<<endl;
}
cout<<"Sum of all marks = "<<student.total;

    return 0;
}