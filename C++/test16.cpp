// Create a program that prompts the user to enter their age.
//  Based on the age entered, use if-else conditions to determine and display
//   if the person is a child, teenager, adult, or senior.

#include<iostream>
using namespace std;

int main ()
{

    int age;

    cout<< "Enter your age: ";
    cin>> age;

    if (age < 13)
    {
        cout<< "according to "<<age<< " you are a child."<<endl;
    }

    else if ((age > 12) && (age <20))
    {
        cout<< "according to "<<age<< " you are you are young (teen)"<<endl;
    }

    else 
    {
        cout<<"you are senior";
    }

    return 0;

}