#include<iostream>
using namespace std;

struct employee
{
    /* data */
    char    name[20];
    float   time;
    float   salary_per_hour;
    char    work_type[20];
};

int main()
{
   struct employee salman;
   struct employee khan;

   employee.salman.name= salman;

    cout<<endl;



    cout<<"The detail of employee " <<salman.name<<" is listed below "<<endl;
    cout<<"Name of Employee is : "<<salman.name<<endl;
    cout<<"Work time of "<<salman.name<<" is : "<<salman.time<<endl;
    cout<<"Salary Per hour of "<<salman.name<<" : "<<salman.salary_per_hour<<endl;
    cout<<"Work type of "<<salman.name<<" : "<<salman.work_type<<endl;


    cout<<"The detail of employee " <<khan.name<<" is listed below "<<endl;
    cout<<"Name of Employee is : "<<khan.name<<endl;
    cout<<"Work time of "<<khan.name<<" is : "<<khan.time<<endl;
    cout<<"Salary Per hour of "<<khan.name<<" : "<<khan.salary_per_hour<<endl;
    cout<<"Work type of "<<khan.name<<" : "<<khan.work_type<<endl;
}