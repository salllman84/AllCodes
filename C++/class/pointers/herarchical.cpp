#include<iostream>
using namespace std;

class Employee{
    protected:
    double Salary;
    void setSalary(double s){
        this ->Salary = s;
    }

    void getSalary(double s){
        this->Salary=s;
        cout<<"Salary: "<<Salary<<endl;
    }
};

class Manager: public Employee{
    public:
    void DisplaySalary(double s){
        getSalary(s);
    }
};

class Engineer:public Employee{
    public:
    void DisplaySalary(double s){
        getSalary(s);
    }
};

int main(){
    Manager Salman;
    Engineer SoftSalman;
    Salman.DisplaySalary(175000);
    SoftSalman.DisplaySalary(45326);

    return 0;
}