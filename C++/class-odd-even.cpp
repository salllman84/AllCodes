#include<iostream>
using namespace std;

class isoddEven{
    int oddeven;

public:
    void getdata();
    void givedata();
};

void isoddEven::getdata(){
    cout << "Enter an integer to find out if it's odd or even: ";
    cin >> oddeven;
}

void isoddEven::givedata(){
    if (oddeven % 2 == 0){
        cout << oddeven << " is even.";
    }
    else{
        cout << oddeven << " is odd.";
    }
}

int main(){
    isoddEven number;
    number.getdata();
    number.givedata();

    return 0;
}
