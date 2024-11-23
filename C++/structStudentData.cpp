#include<iostream>
using namespace std;

struct studentData{
    string name;
    int sub[4];
    int total;

    void getStudentData(){
        cout<<"Enter student name: ";
        cin>>name;
        total = 0;
        for(int i=0; i<4; i++){
            cout<<"Enter marks of "<<name<<" in Subject "<<i+1<<"\t : ";
            cin>>sub[i];
            total += sub[i];
        }
    }

    void giveStudentData(){
        cout<<"Name : "<<name<<endl;
        for (int i=0; i<4; i++){
            cout<<"Marks of "<<name<<" in Subject "<<i+1<<" : "<<sub[i]<<endl;
        }
        cout<<"Total marks of "<<name<<" : "<<total;
    }
};

int main(){
    studentData student1;
    student1.getStudentData();
    student1.giveStudentData();

    return 0;
}