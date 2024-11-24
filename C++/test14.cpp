#include <iostream>
using namespace std;

int main()
{
    long long int phone_number;
    string name;
    int counter = 1;

    while (counter <= 10)
    {
        cout << "Please enter the contact information of " << counter << endl;
        
        cout << "Please Enter Your Name: ";
        cin >> name;

        cout << "Enter the Phone number of " << name << ": ";
        cin >> phone_number;
        cout << endl;

        counter++;
    }

    return 0;
}
