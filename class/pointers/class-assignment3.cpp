// Question number 4 Exe 9.
// Single Inheritance. 

#include<iostream>
#include<iomanip>
using namespace std;

class Employee{

    protected: // to access in Derived Class.
    string name;
    int EmpID;
    float BasicSalary;

    public:
    void SetEmpDetail(){
        cout<<"Enter Name: "<<endl; cin>>name;
        cout<<"Enter Employee ID: "<<endl; cin>>EmpID;
        cout<<"Enter Basic Salary of "<<name<<" : "<<endl; cin>>BasicSalary;
    }

    void GetEmpDetail(){
        cout<<"\nName: "<<name<<endl;
        cout<<name<<" ID: "<<EmpID<<endl;
        cout<<name<<" Basic Salary: "<<fixed<<setprecision(2)<<BasicSalary<<endl;
    }
};

class Allowance: public Employee{
    float Health_insurance;
    float Home_insurace;
    float GrossSalaray;

    public:
    void SetAllowance(){
        Health_insurance = 0.15 * BasicSalary;
        Home_insurace = 0.2 * BasicSalary;
        GrossSalaray = BasicSalary + Health_insurance + Home_insurace;

    }

    void GetAllowance(){
        cout<<"Health Insurance of "<<name<<": "<<fixed<<setprecision(2)<<Health_insurance<<endl;
        cout<<"Home Insurace of "<<name<<" : "<<fixed<<setprecision(2)<<Home_insurace<<endl;
        cout<<"Gross Salaray of "<<name<<" : "<<fixed<<setprecision(2)<<GrossSalaray<<endl;
    }
};

int main(){
    Allowance myAllowance;
    
    myAllowance.SetEmpDetail();
    myAllowance.SetAllowance();
    myAllowance.GetEmpDetail();
    myAllowance.GetAllowance();
}