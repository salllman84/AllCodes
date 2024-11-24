#include<iostream>
using namespace std;

int main () {
    float units, surplus1, surplus2, first_bill, second_bill;

    cout<<"Enter the electric bill units: ";
    cin >> units;

    surplus1= (5.0/100) * units ;
    surplus2= (10.0/100) * units ;

    first_bill= (units*18)+surplus1;
    second_bill= (units*46)+surplus2;

if (units<=200)
    {
        cout<< "The electric bill is:"<<first_bill;
    }
else 
    {
        cout<<"The electric bill is equal to: "<<second_bill;
    }

    return 0;
}