#include<iostream>
using namespace std;

class Account{
    long long int AccoutNum;
    static int MinBalace;

    public:
    void SetDetais(){
        cout<<"Enter account number: "; cin>>AccoutNum;
    }   

    void GetDetails(){
        cout<<"\nAcount Number: "<<AccoutNum;
        cout<<"\nMinimum Balance: "<<MinBalace;
    }
};
int Account::MinBalace=5000;

int main(){
    Account Myaccount;
    Myaccount.SetDetais();
    Myaccount.GetDetails();

    return 0;
}