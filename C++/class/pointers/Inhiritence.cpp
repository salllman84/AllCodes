#include<iostream>
using namespace std;

class student{
    int rollNo;
    long long int phoneNumber;

    protected:
    string name;
    string address;

    public:
    student(string n, string a, int r, long long int p){
        name = n; address=a; rollNo=r; phoneNumber=p;
    }

    void getName(string n){
        name=n;
    }
    void getaddress(string a){
        address=a;
    }
    void getrollNo(int r){
        rollNo=r;
    }
    void getphoneNumber(long long int p){
        phoneNumber=p;
    }

    void giveName(){
        cout<<"\nName: "<<name;
    }
    void giveaddress(){
        cout<<"\nAddress of "<<name<<": "<<address;
    }
    void giverollNo(){
        cout<<"\nRoll Number of "<<name<<": "<<rollNo;
    }
    void givephoneNumber(){
        cout<<"\nPhone number of "<<name<<": "<<phoneNumber;
    }

    void giveStudentDetails(){
        cout<<"Name: "<<name;
        cout<<"\nAddress of "<<name<<": "<<address;
        cout<<"\nRoll Number of "<<name<<": "<<rollNo;
        cout<<"\nPhone Number of "<<name<<": "<<phoneNumber;
    }

};

class usman:public student{
    public:
    usman(string n, string a, int r, long long int p) : student(n, a, r, p) {
        // The base class constructor is called here, no need to rewrite it
    }
};

int main(){
    student std1("Salman", "District Bajaur", 231428, 923194483583);
    usman UsmanStudent("Usman", "tehsil Khar", 231444, 3115678498);

cout<<"\nBase Class"<<endl;
    std1.giveStudentDetails();

//     std1.getName("Usman");
//     std1.getaddress("Inayat Killi");
//     std1.getrollNo(231481);
//     std1.getphoneNumber(3096659868);

// cout<<"\nBase Class 2nd Data."<<endl;

//     std1.giveName();
//     std1.giveaddress();
//     std1.giverollNo();
//     std1.givephoneNumber();
   

    //Derived Class Started Here.

    // UsmanStudent.getName("Hidayat");
    // UsmanStudent.getaddress("Inayat Killi");
    // UsmanStudent.getrollNo(112233);
    // UsmanStudent.getphoneNumber(3445674897);

cout<<"\n\nDerived Class."<<endl;

    // UsmanStudent.giveName();
    // UsmanStudent.giveaddress();
    // UsmanStudent.giverollNo();
    // UsmanStudent.givephoneNumber();

// cout<<"\n\nDerived Class2."<<endl;

    UsmanStudent.giveStudentDetails();

}