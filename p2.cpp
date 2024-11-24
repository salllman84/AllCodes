#include<iostream>
using namespace std;

int main()
{
    int first[6] = {1, 2, 3, 4, 5, 6};
    int second[6], third[6], i;

    for (i = 0; i < 6; i++)
    {
        second[i] = first[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << "Element of first array = " << first[i] << endl;
    }
cout<<"====================="<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Element of second array = " << second[i] << endl;
    }
    cout<<"====================="<<endl;

    for (int i = 0; i < 6; i++)
    {
        third[i] = first[i] + second[i];
        cout << "Sum of " << first[i] << " + " << second[i] << " = " << third[i] << endl;
    }

    cout<<"====================="<<endl;
    for (int i = 0; i < 6; i++)
    {
        if (first[i] % 2 == 0)
        {
            cout << "Even number in first array is = " << first[i] << endl;
        }
        
    }
    
    cout<<"====================="<<endl;
    
    for (int i=0; i < 6; i++)
    {
        if (first[i] % 2 != 0)
        {
            cout<< "Odd number in first array are = "<< first[i]<< endl;
        }
    }

    return 0;
}
