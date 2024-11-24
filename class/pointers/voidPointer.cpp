#include <iostream>
#include <iomanip> // Include the header for setprecision
using namespace std;

void print(void* num, char Dtype) {
    switch (Dtype) {
        case 'i': cout << *((int*) num) << endl; break;
        case 'c': cout << *((char*) num) << endl; break;
        case 'b': cout << *((bool*) num) << endl; break;
        case 'd': cout << fixed << setprecision(2) << *((double*) num) << endl; break; // Set precision to 2 for double
        case 'f': cout << fixed << setprecision(2) << *((float*) num) << endl; break; // Set precision to 2 for float
    }
}

int main(){
    int number;
    cout<<"Enter a number ; ";
    cin>>number;
    cout<<endl;
    char type;
    cout<<"Enter 'i' for integer : ";
    cin>>type;
    cout<<endl;

    char character;
    cout<<"Enter a charactor : ";
    cin>>character;
    cout<<endl;
    cout<<"Enter 'c' for character : ";
    cin>>type;
    cout<<endl;

    double number2;
    cout<<"Enter a decimal number : ";
    cin>>number2;
    cout<<endl;
    cout<<"Enter 'd' for double : ";
    cin>>type;
    cout<<endl;

    float number3;
    cout<<"Enter a decimal number : ";
    cin>>number3;
    cout<<endl;
    cout<<"Enter 'f' for float : ";
    cin>>type;
    cout<<endl;

    bool trueFalse;
    cout<<"enter True or False : ";
    cin>>trueFalse;
    cout<<endl;
    cout<<"Enter 'b' for boolean : ";
    cin>>type;
    cout<<endl;

    print(&number, type);
    print(&character, type);
    print(&number2, type);
    print(&number3, type);
    print(&trueFalse, type);


    return 0;
}