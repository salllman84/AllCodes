#include<iostream>
using namespace std;

class studentRecord{
    string name;
    int rollno;
    int obtainMarks;

    public:
    void getStudentRecord();
    void giveStudentRecord();
};

void studentRecord::getStudentRecord(){
    cout<<"Enter student name : ";
    cin>>name;
    cout<<"Enter roll number : ";
    cin>>rollno;
    cout<<"Enter obtain marks : ";
    cin>>obtainMarks;
    cout<<endl<<endl;
}

void studentRecord::giveStudentRecord(){
    cout<<"\n\nName : "<<name;
    cout<<"\nRoll number : "<<rollno;
    cout<<"\nObtain marks : "<<obtainMarks;
}

int main(){
    studentRecord StudentsData[10];
    for(int i=0; i<10; i++){
        StudentsData[i].getStudentRecord();
    }

    for(int j=0; j<10; j++){
        StudentsData[j].giveStudentRecord();
    }

    return 0;
}