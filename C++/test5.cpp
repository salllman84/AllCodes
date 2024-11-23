#include<iostream>
using namespace std;

int main ()
{
    int roll_number, student=1;
    string group;
    string name;

    while (student<=5)
    {
        cout << "Enter name of the studen" << student;
        cin >> name;

        cout << "Enter group of the " << name;
        cin >> group;

        cout << "Enter roll number of the " << name;
        cin >> roll_number;
        student++;
        cout<<endl;
    }

    return 0;
}