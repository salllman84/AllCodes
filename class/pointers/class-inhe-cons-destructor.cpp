#include<iostream>
using namespace std;

class vehicle{
    public:
            vehicle(){
                cout<<"\nvehicle Created.\n";
            }
            ~vehicle(){
                cout<<"\nvehicle distroyed.\n";
            }
};

class car:public vehicle{
    public:
    car(){
            cout<<"\nCar Created\n";
    }
    ~car(){
        cout<<"Car Destroyed\n";
    }
};

int main(){
    car Car;
}