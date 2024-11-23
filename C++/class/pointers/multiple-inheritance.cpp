#include<iostream>
using namespace std;

class Camera{
    public:
    void takePhoto(){
        cout<<"Taking phone\n";
    }

};

class Phone{
    public:
    void makingCall(){
        cout<<"Making Call\n";
    }
};

class   Gps{
    public:
    void Nevigate(){
        cout<<"Nevigating\n";
    }

};

class SmartPhone: public Camera, public Phone, public  Gps{

};

int main(){
    SmartPhone MyPhone;
    MyPhone.takePhoto();
    MyPhone.Nevigate();
    MyPhone.Nevigate();

        return 0;
}