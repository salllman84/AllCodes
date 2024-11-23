#include<iostream>
using namespace std;

class engine{
    public:
    void startEngin(){
        cout<<"Engine Stared.\n";
    }
};

class boday{
    public:
    void openDoor(){
        cout<<"Door opened\n";
    }
};
class car:public engine , public boday{
    public:
    void drive(){
        cout<<"Let's Drive";
    }
};

int main(){

    car demonestrate;
    demonestrate.startEngin();
    demonestrate.openDoor();
    demonestrate.drive();

    return 0;
}