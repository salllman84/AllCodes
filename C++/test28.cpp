#include<iostream>
using namespace std;

int main () {
    
    int array[7];

    for(int i=0; i<7; i++)
    
    {
        cout<<"Enter the value of array ["<<i<<"]= ";
        cin>>array[i];
        cout<<endl;
    }

    cout<<"The array will store in= "<<endl;

    for(int i=0; i<7; i++)
    {
        cout<<"the result of array["<<i<<"] is equal to= "<<array[i]<<endl;
    }
    
        return 0;
}