#include<iostream>
using namespace std;

class Device{
    public:
    void turnon(){
        cout<<"phone is on\n";
    }
};

class Computer:public Device{
    public:
    void Boot(){
        cout<<"Device is Booting\n";
    }
};

class Laptop: public Computer{
    public:
    void OpenLed(){
        cout<<"Laptop Led opened\n";
    }
};

int main(){

Laptop MyLaptop;
MyLaptop.turnon();
MyLaptop.Boot();
MyLaptop.OpenLed();

}