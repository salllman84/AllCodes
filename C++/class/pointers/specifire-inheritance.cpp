#include<iostream>
using namespace std;

class Member{
    int memberID;
    protected:
    string memberName;

    public:
    void SetMemberDetails(int id, string name){
        this->memberID=id;
        this->memberName=name;
    }

    void GetMemberDetails(){
        cout<<"Name: "<<memberName<<endl;
        cout<<memberName<<" id number "<<memberID;
    }
};

class PremiumMember:public Member{
    public:
    void DisplayPremiumMessage(){
        GetMemberDetails();
        cout<<"\nWelcome, Premium Member!";
    }
};

int main(){
    PremiumMember first;
    first.SetMemberDetails(23434, "Ahmad Ali");
    first.DisplayPremiumMessage();

}