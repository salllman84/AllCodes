// Student Class: Create a Student class with attributes like name, age, and rollNumber.
// Use a constructor to initialize these
// attributes and a destructor to clean up any allocated resources.

#include<iostream>
using namespace std;

class Student{
    string StudentName;
    int rollNumber;
    float age;

    public:

    Student(string name, int roll, float old){
        StudentName = name;
        rollNumber = roll;
        age = old;
    }

    void giveStudentDetails(){
        cout<<"\nName = \t"<<StudentName;
        cout<<"\nRoll Number = "<<rollNumber;
        cout<<"\nAge of "<<StudentName<<" = "<<age;
    }

    ~Student(){
        cout<<"\nErased";
    }
};

int main(){

    Student student1("Salman Khan", 231428, 20.3);
    student1.giveStudentDetails();

    return 0;
}