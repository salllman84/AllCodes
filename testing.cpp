#include<iostream>
using namespace std;

int main(){
    float abc[5], sum, avg;
    int i;
    for ( i=0; i<5; i++)
    {
        cout<<"enter value in element"<<i<<endl;
        cin>>abc[i];
     }
     sum = 0.0;
     avg = 0.0;
     for (int i=5; i>0; i--)
     {
     sum = sum+abc[i];
     avg = sum/5.0;
     }
cout<< "The sum of all values are : "<<sum<<endl;
cout<<"The average of all value are : "<<avg;

return 0;
}