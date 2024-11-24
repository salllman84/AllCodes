// Question number 5 Exe 9.
// Single Inheritance. 

#include<iostream>
#include<iomanip>
using namespace std;

class Employee{
    string name;
    int EmpID;
    protected:
    float BasicSalary;

    public:
    void SetEmpDetails(){
        cout<<"Enter Name: "<<endl; cin>>name;
        cout<<"Enter "<<name<<" ID: "<<endl; cin>>EmpID;
        cout<<"Enter "<<name<<" Basic Salaray: "<<endl; cin>>BasicSalary;
    }

    void GetEmpDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<name<<" ID: "<<EmpID<<endl;
        cout<<name<<" Basic Salaray: "<<fixed<<setprecision(2)<<BasicSalary<<endl;
    }
};

class Allowance{
    protected:
    float health;
    float car;
    float house;
    float GrossSalaray;

};

class Show: public Employee, public Allowance{
    public:
    void EmpDetails(){
        SetEmpDetails();
    }

    void SetAllowance(){
        health = 0.20 * BasicSalary;
        car = 0.15 * BasicSalary;
        house = 0.1 * BasicSalary;
        GrossSalaray = BasicSalary+health+car+house;
    }

    void GetAllowance(){
        cout<<"Health: "<<health<<endl;
        cout<<"Home: "<<house<<endl;
        cout<<"Car: "<<car<<endl;
        cout<<"Gross Salaray: "<<fixed<<setprecision(2)<<GrossSalaray<<endl;

    }
};

int main(){
    Show myDetails;
    myDetails.EmpDetails();
    myDetails.SetAllowance();
    myDetails.GetEmpDetails();
    myDetails.GetAllowance();
}