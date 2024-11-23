/* Qno3  */

#include<iostream>
using namespace std;

struct student
{
    string name;
    int rollno;
    int marks[5];
};


int main(){

    student salman;
    student usman;
    student hidayat;

    cout<<"Enter name of the student : ";
    cin>>salman.name;
    cout<<"Enter roll number of "<<salman.name<<" : ";
    cin>>salman.rollno;
    
    /* Here we will take a loop to input marks five times  */

    for(int m=0; m<5; m++){
        cout<<"Enter marks of "<<salman.name<<" in the ["<<m<<"]  Space : ";
        cin>>salman.marks[m];
    }

    int salman_sum=0;
    /*using loop to find sum */
    for(int s=0; s<5; s++){
        salman_sum+=salman.marks[s];

    }
    int salman_avg=0;
    /* using loop to find average  */
    for(int a=0; a<5; a++){
        salman_avg=salman_sum/5;
    }

    /* Here we will take second student data*/

    cout<<"Enter name of the student : ";
    cin>>usman.name;
    cout<<"Enter roll number of "<<usman.name<<" : ";
    cin>>usman.rollno;
    
    /* Here we will take a loop to input marks five times  */

    for(int m2=0; m2<5; m2++){
        cout<<"Enter marks of "<<usman.name<<" in the ["<<m2<<"]  Space : ";
        cin>>usman.marks[m2];
    }

    int usman_sum=0;
    /*using loop to find sum */
    for(int s2=0; s2<5; s2++){
        usman_sum+=usman.marks[s2];

    }
    int usman_avg=0;
    /* using loop to find average  */
    for(int a2=0; a2<5; a2++){
        usman_avg=usman_sum/5;
    }

    /* Here we will take third student data*/

    cout<<"Enter name of the student : ";
    cin>>hidayat.name;
    cout<<"Enter roll number of "<<hidayat.name<<" : ";
    cin>>hidayat.rollno;
    
    /* Here we will take a loop to input marks five times  */

    for(int m3=0; m3<5; m3++){
        cout<<"Enter marks of "<<hidayat.name<<" in the ["<<m3<<"]  Space : ";
        cin>>hidayat.marks[m3];
    }

    int hidayat_sum=0;
    /*using loop to find sum */
    for(int s3=0; s3<5; s3++){
        hidayat_sum+=hidayat.marks[s3];

    }

    int hidayat_avg=0;
    /* using loop to find average  */
    for(int a3=0; a3<5; a3++){
        hidayat_avg=hidayat_sum/5;
    }

    /* Average marks of each student  */
    
    cout<<"average marks of "<<salman.name<<" is = "<<salman_avg<<endl;
    cout<<"average marks of "<<usman.name<<" is = "<<usman_avg<<endl;
    cout<<"average marks of "<<hidayat.name<<" is = "<<hidayat_avg<<endl;

    /* find the greatest Average marks in between these students */

if(salman_avg>usman_avg && salman_avg>hidayat_avg) 
    {
        cout<<salman.name<<" has the highest average marks= "<<salman_avg<<endl;
    } else if(usman_avg > salman_avg && usman_avg > hidayat_avg) 
    {
        cout<<usman.name<<" has the highest average marks= "<<usman_avg<<endl;
    } else 
    {
        cout<<hidayat.name<<" has the highest average marks= "<<hidayat_avg<<endl;
    }

    return 0;
}