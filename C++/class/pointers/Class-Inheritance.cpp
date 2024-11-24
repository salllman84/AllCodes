#include<iostream>
using namespace std;

class publicInfo{
    string name;
    int rollNo;
    public:
    string address;

    void getName(string n){
        this-> name=n;
    }
    void getRollNo(int r){
        this-> rollNo=r;
    }
    void giveName(){
        cout<<"\nName: "<<name;
    }
    void giveRollNo(){
        cout<<"\nRoll number of "<<name<<" : "<<rollNo;
    }
};

int main(){
    publicInfo person1;
    person1.getName("Ali");
    person1.getRollNo(1232);
    person1.address="\nDistrict Peshawar";

    person1.giveName();
    person1.giveRollNo();
    cout<<"\naddress : "<<person1.address;
    
}