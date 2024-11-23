#include<iostream>
using namespace std;

int main()
{
int decimal, octal;
cout<<"Enter an interger value = ";
cin>> decimal;
do
{
    octal= decimal%8;
    decimal= decimal/8;
    cout<<octal;
} while (decimal>=1);

    return 0;
}