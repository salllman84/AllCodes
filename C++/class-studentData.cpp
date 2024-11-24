#include<iostream>
using namespace std;

class studentData{
    string name;
    int rollNo;
    int maths, physics, bio;

    public:
    int totalMarks;
    float averageMarks;
    void getStudentData();
    void giveStudentData();
};

void studentData::getStudentData(){
    
    cout<<"Enter student name : "<<name;
    cin>>name;
    cout<<"Enter Roll number of "<<name<<" : ";
    cin>>rollNo;
    cout<<"Enter marks of "<<name<<" in Maths : ";
    cin>>maths;
    cout<<"Enter marks of "<<name<<" in Physics : ";
    cin>>physics;
    cout<<"Enter Marks of "<<name<<" in Biology : ";
    cin>>bio;
    totalMarks=maths+physics+bio;
    averageMarks=totalMarks/3;
}

void studentData::giveStudentData(){
    cout<<"\n\nName                 : "<<name<<"\n";
    cout<<"Roll number          : "<<rollNo<<"\n";
    cout<<"Marks in maths       : "<<maths<<"\n";
    cout<<"Marks in Physics     : "<<physics<<"\n";
    cout<<"Marks in Biology     : "<<bio<<"\n";
    cout<<"Total marks          : "<<totalMarks<<"\n";
    cout<<"Average marks        : "<<averageMarks<<"\n";
}

int main(){

    studentData stdData;
    stdData.getStudentData();
    stdData.giveStudentData();

    return 0;
}