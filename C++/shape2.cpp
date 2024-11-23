#include<iostream>
using namespace std;
int main()
{
    int abc[5],i,max;
    for(i-0; i<=4; i++)
    {
        cout<<"Enter the value in element = ";
        cin>>abc[i];
    }
    max=abc[0];
    for(i=0; i<=4; i++)
    {
        if(max<abc[i])
        max=abc[i];
    }
    cout<<"Maximum Value = "<<max<<endl;
}