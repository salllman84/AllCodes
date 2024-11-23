/* Implement a C++ program that determines if a given number is even or odd. 
Print the result accordingly. */

#include<iostream>
using namespace std;

int main()
{
   long long  int number;

    cout<< "Enter an integer to find its (Odd or Even)."<<endl;
    cin>> number;

    if (number%2==0)
    {
        cout<<" the integer " <<number<< " is Even."<<endl;
    }

    else
    {
        cout<<" the integer " <<number<< " is Odd."<<endl;
    }
        return 0;
}