#include<iostream>
using namespace std;

class Appeliance{
    protected:
    int power;

    public:
    void setPower(int p){
        this -> power=p;
    }
    int getPower(int a){
        this -> power=a;
        return power;
    }
};

class WashingMachine: public Appeliance{
    public:
    void displayPower(int p){
        cout<<"power: "<<getPower(p);
    }
};

int main(){
    WashingMachine MyWashingMachine;
    MyWashingMachine.displayPower(200);
}