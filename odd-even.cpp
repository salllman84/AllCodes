#include<iostream>
using namespace std;
int main ()
{

    int numbers[5],odd,even;
    cout<<"please enter upto five integers values: "<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"Enter the value of ["<<i<<"] : ";
        cin>>numbers[i];
    }
    cout<<"These values are even : "<<endl;
    for(int e=0; e<5; e++)
    {
        if(numbers[e]%2==0)
        {
            cout<<numbers[e];
            cout<<"\t";
        }
    }
    cout<<endl;
    cout<<"These are odd values from the above data: "<<endl;
    for(int j=0; j<5; j++)
    {
        if(numbers[j]%2 !=0)
        {
            cout<<numbers[j];
            cout<<"\t";
        }
    }

}