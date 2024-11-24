#include<iostream>
using namespace std;

struct student
{
    string name;
    int rollno;
    int totalMarks;
};

student FindTopStudent(const student& s1, const student s2, const student s3){
    if(s1.totalMarks>s2.totalMarks&&s1.totalMarks>s3.totalMarks){
        return s1;
    }
    else if(s2.totalMarks>s1.totalMarks&&s2.totalMarks>s3.totalMarks){
        return s2;
    }
    else{
        return s3;
    }
}

int main(){
    student st[3];
    for(int i=0; i<3; i++){
        cout<<"Enter name of student "<<i+1<<" : ";cin>>st[i].name;
        cout<<"Enter "<<st[i].name<<" Roll number: ";cin>>st[i].rollno;
        cout<<"Enter "<<st[i].name<<" Total Marks: ";cin>>st[i].totalMarks;
    }

    student topper=FindTopStudent(st[0], st[1], st[2]);
    cout<<"\nTopper Details\n";
    cout<<"Name: "<<topper.name<<"\n";
    cout<<"Roll Number: "<<topper.rollno<<"\n";
    cout<<"Total Marks: "<<topper.totalMarks;

    return 0;
}
