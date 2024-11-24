#include<iostream>
using namespace std;

int main()
{

int num[5],odd,sum;

cout<<"please upto 5 values"<<endl;
for(int i=0; i<5; i++)
{
    cout<<"enter the value in ["<<i<<"]: ";
    cin>>num[i];
}
cout<<endl;
cout<<"here are number of odd values."<<endl;
for(int j=0; j<5; j++)
{
    if(num[j]%2!=0)
    {
        cout<<num[j];
        cout<<endl;
    }
}
    sum=0;
for(int s=0; s<5; s++)
{
    
    if(num[s]%2 !=0)
    {
        sum=sum+num[s];
    }

}
cout<<"The of all odd numbers = "<<sum;


    return 0;
}
