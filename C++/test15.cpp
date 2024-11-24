// Write a C++ program that takes an integer as input and checks whether it is positive,
//  negative, or zero. Display the appropriate message.

#include<iostream>
using namespace std;

int main () {

int integer_value;

cout<<"Enter an integer value: ";
cin >> integer_value;

if (integer_value > 0)
{
    cout<< "The " <<integer_value<< " is possitive."<<endl;
}

else if (integer_value < 0)
{
cout << "The " <<integer_value<< " is negative."<<endl;
}

else
{
    cout<< "The " <<integer_value<< " zero."<<endl;
}

return 0;

}