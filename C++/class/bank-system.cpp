#include<iostream>
using namespace std;

// Bank Account Class: Design a BankAccount class with attributes such as accountNumber,
// balance, and ownerName. Implement constructors to initialize these attributes and a destructor
// to handle cleanup tasks.



class BankAccount{
    long long int accountNumber;
    float balance;
    string ownerName;

    public:

    BankAccount(long long int account, float rupees, string name){
        accountNumber = account;
        balance = rupees;
        ownerName = name;
    }

    void giveCustomerDetails(){
        cout<<"\nName = \t"<<ownerName;
        cout<<"\nAccount Number = "<<accountNumber;
        cout<<"\nClosing Balance = "<<balance;
    }

    ~BankAccount(){
        cout<<"\nCleaned Up";
    }
};

int main(){

    BankAccount account1(98710109708160, 190000.0, "Salman Khan");
    account1.giveCustomerDetails();

    return 0;
}