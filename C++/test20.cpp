#include<iostream>
using namespace std;

int main () {
    
char name [15],operation;
int age;

while (true)
{
    cout<<"Enter your name please: "<< "    ";
    cin >> name;

    cout<< "please enter the age of "<<name << "=\t";
    cin >> age;

    cout << "Name= "<<name <<"\n age=" <<age<< endl;

    cout << "Do you want to enter more data, Enter (y) for yes and (N) for no= ";

    cin >> operation;

    if (operation == 'y')
        continue;
    else
    break;

    
}

    return 0;
}