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