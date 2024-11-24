#include<iostream>
using namespace std;

int main ()
{

    int number[5];

    for (int i=0; i<5; i++)
    {
        cout<<"please enter the value of "<<i<<" : ";
        cin>>number[i];
    }
    int max=number[4]; //we can take any index here in number[4];

    for(int i=0; i<5; i++)
    {
        if(max<number[i])
        {
            max = number[i];
        }
    }

    cout<<"The greatest value is "<<max;
    return 0;
}