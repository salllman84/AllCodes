#include<iostream>
using namespace std;

class person{
    string name;
    protected:
    int age;
    public:

    void getName(string n){
        this-> name=n;
    }
    void getAge(int a){
        this->age=a;
    }
    void studentInfo(){
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age<<"\n";
    }
};

class student: public person{
    public:
    int studentID;
    void getStudentInfo(){
        studentInfo();
    }
};

int main(){
    student Student;
    Student.getAge(19);
    Student.getName("Salman");
    Student.getStudentInfo();
    Student.studentID= 244578;
    cout<<"Student ID: "<<Student.studentID;
}