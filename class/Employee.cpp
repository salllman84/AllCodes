// Employee Class: Develop an Employee class with attributes like employeeID, name, and salary.
// Write constructors to initialize these attributes and a destructor to perform cleanup operations.

#include<iostream>
#include <iomanip>
using namespace std;

class employee{
    string employeeID;
    string employeeName;
    float initialSalary;

    public:

    employee(string id, string name, float salary){
        employeeID = id;
        employeeName = name;
        initialSalary = salary;
    }

    void giveEmployeeDetails(){
        cout<<"\n"<<employeeName<<" ID is = "<<employeeID;
        cout<<"\nName of employee is = "<<employeeName;
        cout<<"\nInitial Salary of "<<employeeName<<" is = "<<initialSalary;
    }

    ~employee(){
        cout<<"\nData Erased";
    }
};

int main(){
    employee employee_first("12DET990", "Salman Khan", 1500000.1 );
    employee_first.giveEmployeeDetails();

    return 0;
}