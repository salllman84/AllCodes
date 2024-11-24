#include<iostream>
using namespace std;

int main(){
int n;

cout<<"Enter the first value: ";
cin>>n;

switch (n%2)
{
case 0 :
    cout<<"divisible by 2";
    break;
case 1:
    cout<<"not divisible by 2";
    break;

}


cout<<endl;

switch(n%3)
{
case 0:
    cout<<"Divisible by 3";
    break;
case 1:
    cout<<"not divisible by 3";
    break;
}


    return 0;
}