#include<iostream>
using namespace std;

int main()
{

float abc[5], max;
    int i;

    for (i=0; i<5; i++)
    {
        cout<<"Enter the vlaue of an element= "<<i<<endl;
        cin>> abc[i];
    }

    max= abc[0];
    for(i=1; i<=5; i++)
    {
        if (max<abc[i])
        max=abc[i];
    }

    cout<<"maximum value is = " <<max;

    return 0;
}