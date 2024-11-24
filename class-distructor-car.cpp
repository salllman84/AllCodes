/*

Create a class Car with private attributes model and manufacturer.
Implement a destructor for the Car class that deallocates any dynamically
allocated memory and prints a message indicating the destruction of the object.

*/


#include<iostream>
using namespace std;

class Car{
    int model;
    int manufacturDate;

    public:

    Car(int y, int z);
    ~Car();
    void giveCarDetails();
};

Car::Car(int y, int z){
    model = y;
    manufacturDate = z;
    cout<<"constructor\n";
}

Car::~Car(){
    cout<<"\nMemory Erased by Destructor";
}

void Car::giveCarDetails(){
    cout<<"\nCar Model : "<<model<<endl;
    cout<<"Manufactured Date : "<<manufacturDate<<endl;
}

int main (){
    Car prado(1997, 192024);
    prado.giveCarDetails();

    return 0;
}