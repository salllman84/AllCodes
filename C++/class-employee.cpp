/*

Create a C++ class called Employee with private attributes name and id.
Implement a parameterized constructor that accepts arguments for name and 
id and initializes the object with the provided values.

*/

#include<iostream>
using namespace std;

class employee{
    string name;
    int epId;

    public:

    employee(string a, int b){
        name=a;
        epId=b;

        cout<<"Name        : "<<name<<endl;
        cout<<"Employee Id : "<<epId;
    }
};

int main(){
employee e1("Ahamd", 11233);

return 0;
}