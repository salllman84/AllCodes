#include<iostream>
using namespace std;

struct student
{
    string name;
    int subject1, subject2, subject3, subject4;
};
int main(){

student data;
data.name={"Salman Khan"};
data.subject1=99;
data.subject2=100;
data.subject3=75;
data.subject4=85;

int sum=0;
float avg;
sum=data.subject1+data.subject2+data.subject3+data.subject4;
avg=sum/4.0;


cout<<"Name = "<<data.name<<endl;
cout<<"Maths = "<<data.subject1<<endl;
cout<<"Biology = "<<data.subject2<<endl;
cout<<"Programming = "<<data.subject3<<endl;
cout<<"Economics = "<<data.subject4<<endl;
cout<<endl<<endl;
cout<<"Sum of all marks of "<<data.name<<" = "<<sum<<endl;
cout<<"Average marks of "<<data.name<<" = "<<avg<<endl;



    return 0;
}