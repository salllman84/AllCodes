#include<iostream>
#include<string>
using namespace std;

// Total, avg, and Percentage of Student marks;

class marks{
    string name;
    int roll, sub1, sub2, sub3, sub4, sub5;
    int total=500;
    int obtain;
    float percent, avg;

    public:
    void getdata();
    int  givedata();
    
};

void marks::getdata(){
    cout<<"Enter name of the student : ";
    cin>>name;
    cout<<"\n Enter Roll number of "<<name<<" : ";
    cin>>roll;
    cout<<"\n Enter first subject marks : ";
    cin>>sub1;
    cout<<"\n Enter second subject marks : ";
    cin>>sub2;
    cout<<"\n Enter third subject marks : ";
    cin>>sub3;
    cout<<"\n Enter fourth subject marks : ";
    cin>>sub4;
    cout<<"\n Enter Fifth Subject marks : ";
    cin>>sub5;
}

int marks::givedata(){
    obtain=sub1+sub2+sub3+sub4+sub5;
    percent=(static_cast<float>(obtain) / total) * 100;
    avg=obtain/5.0;

    cout<<"\n Total marks : "<<total;
    cout<<"\n Obtain marks of "<<name<<" = "<<obtain;
    cout<<"\n Percentage of "<<name<<" = "<<percent<<" %";
    cout<<"\n Average marks of "<<name<<" = "<<avg;
}

int main(){
    marks student;
    student.getdata();
    student.givedata();

    return 0;
}