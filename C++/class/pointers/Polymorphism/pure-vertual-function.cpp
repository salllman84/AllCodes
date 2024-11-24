#include<iostream>
using namespace std;

class Person{
    protected:
    string name;
    string addresss;

    public:
    Person(string n, string adr){
        name=n; addresss=adr;
    }
    virtual void display()=0;
};

class student: public Person{
    int rollno, sub1, sub2, sub3, sub4, sub5;
    double average;
    public:

    student(string n, string adr, int r, int s1, int s2, int s3, int s4, int s5) : Person(n,adr){
        rollno =r; sub1 = s1; sub2 = s2; sub3 = s3; sub4 = s4; sub5 = s5;
    }

    void CalculateAverage(){
        average = sub1+sub2+sub3+sub4+sub5/5.0;
    }

    double GetAverage(){
        return average;
    }

    void display() {
        
        cout<<"Name: "<<name<<endl;
        cout<<"Addresss: "<<addresss<<endl;
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"subject one: "<<sub1<<endl;
        cout<<"Subject two: "<<sub2<<endl;
        cout<<"subeject three: "<<sub3<<endl;
        cout<<"subject four: "<<sub4<<endl;
        cout<<"subject five: "<<sub5<<endl;
        CalculateAverage(); // call here or in main function
        cout<<"Average Marks: "<<GetAverage()<<endl;
    }

};

int main(){
    student salman("Salman", "District Bajaur", 231428, 88, 89, 95, 88, 87);
    // salman.CalculateAverage();
    salman.display();

    return 0;
}