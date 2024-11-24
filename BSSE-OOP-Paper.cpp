// All answers of OOp paper written By Salman Ulfat. to run this programe only remove slash with start [/*].
// But Don't remove double slash [//].
// copy each programe and make new file to execute.

/*  Question number 1;

#include<iostream>
using namespace std;

class student {
    string name;
    int rollNumber, sub1, sub2, sub3;
    float avg;

    public:
    student(string a, int b, int c, int d, int e){
        name=a; rollNumber=b; sub1=c; sub2=d; sub3=e;
    }

    void calcAverage(){
        avg=(sub1+sub2+sub3)/3.0;
        cout<<"Average : "<<avg<<endl;
        (avg>=60)?cout<<"pass":cout<<"fail";
        // this is called Conditional Operators See it in the Book at Page number 78
    }
};

int main(){
    student std1("ali", 1234, 60, 60, 60);
    std1.calcAverage();

    return 0;
}   

*/



/* Question number 2;

#include<iostream>
using namespace std;

class rectangle{
    int length, width, total;

    public:
    void calcArea(){
        length=10;
        width=5;
        total = length*width;
        cout<<"Area = "<<total;
    }

};

int main(){
    rectangle area;
    area.calcArea();
}

*/


// Question number 3;

/* 
#include<iostream>
using namespace std;

class bankaccount{
    int accountNumber;
    double initialBalance;

    public:
    bankaccount(int a){
        accountNumber=a;
    }

    bankaccount(int a, double b){
        accountNumber=a;
        initialBalance=b;
    }

    int getAccountNumber(){
        cout<<"Enter account number : ";
        cin>>accountNumber;
        return accountNumber;
    }

    double getInitialBalance(){
        cout<<"\nEnter Initial Balance : ";
        cin>>initialBalance;
        return initialBalance;
    }

    void giveDetails(){
        cout<<"\nAcount Number = "<<accountNumber;
        cout<<"\nInitial Balance = "<<initialBalance<<endl<<endl;
    }

};

int main(){
    bankaccount b1(432432), b2(543456, 899.9);
    b1.getInitialBalance();
    b1.giveDetails();
    b2.giveDetails();
}

*/