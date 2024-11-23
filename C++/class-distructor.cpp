/*

Extend the Employee class from the previous question with a destructor.
Implement the destructor to print a message indicating when an object
of the class is destroyed.

*/

#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    int empId;

public:
    // Constructor declaration
    Employee(string a, int b);

    // Destructor declaration
    ~Employee();

    // Function to display employee details
    void display() const;
};

// Constructor definition
Employee::Employee(string a, int b) {
    name = a;
    empId = b;
    cout << "Employee object created" << endl;
}

// Destructor definition
Employee::~Employee() {
// it will print it the end of program, when whole program completed.
    cout << "\nEmployee object destroyed" << endl;
}

// Function to display employee details
void Employee::display() const {
    cout << "\nName: " << name << endl;
    cout << "Employee ID: " << empId << endl;
}

int main() {
    Employee emp1("Salman", 231428);
    emp1.display();

    // Destructor will be automatically called when emp1 goes out of scope

    return 0;
}
