#include<iostream>
using namespace std;
 class person {
    string name;
    protected:
    void getName(string n){
        this ->name = n;
    }

    public:
    string giveName(){
        return name;
    }
 };

 class student: public person{
    int rollno;
    public:
    void getRollNO(int r){
        this->rollno = rollno;
    }

    int giveRollNo(){
        return rollno;
    }
    void getStudentName(string n){
        getName(n);
    }
   
 };

 int main(){
    student std1;
    std1.getStudentName("ali");
    cout<<std1.giveName();
    cout<<endl;
    std1.getRollNO(231428);
    cout<<std1.giveRollNo();
    return 0;
 }