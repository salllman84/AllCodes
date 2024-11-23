// Assignment Number 1
// Name           Salman Khan
// Roll Number:   231428
// Subject:       BSSE
// Section:       'B'
// Assign of:     OOPs



// Question number 5 of Exe 8.

#include <iostream>
using namespace std;

class FindMax {
private:
    int size; // input size from user
    int arr[100]; // *size will updat it.
    int maxVal;

public:
    // input Data
    void setData() {
        cout << "Enter the size of the array: ";
        cin >> size;
        for (int i = 0; i < size; ++i) {
            cout<<"Number: ";
            cin >> arr[i];
            cout<<endl;
        }
    }

    // find maximum number fun.
    void findMax() {
        maxVal = arr[3];
        for (int i = 0; i < size; ++i) {
            if (maxVal<=arr[i]) {
                maxVal = arr[i];
            }
        }
    }

    void DisplayMax() {
        cout << "The maximum value in the array is: " << maxVal << endl;
    }
};

int main() {
    FindMax num;
    num.setData();
    num.findMax();
    num.DisplayMax();
    return 0;
}


                     ***********************


// Question number 6 Exe 8.

#include<iostream>
using namespace std;

class EmployeeRecord{
    string name;
    int EmpID;

    public:
    void SetData(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter "<<name<<" ID number: ";
        cin>>EmpID;
        cout<<endl;
    }

    void getData(){
        cout<<"Name: "<<name<<endl;
        cout<<name<<" ID: "<<EmpID<<endl<<endl;
    }
};

int main(){
    EmployeeRecord employee[10];
    cout<<"Enter all employee Details\n";
    for(int i=0; i<10; i++){
        employee[i].SetData();
    }

    cout<<"\nAll Employees Details\n";
    for(int i=0; i<10; i++){
        employee[i].getData();
    }
}


















// Assignment Number 2
// Name           Salman Khan
// Roll Number:   231428
// Subject:       BSSE
// Section:       'B'
// Assign of:     OOPs


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


                       ***********************


// Question number 5 Exe 9.
// Multiple Inheritance. 

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
                          ***********************