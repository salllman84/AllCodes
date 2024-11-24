#include<iostream>
using namespace std;

class posNegZero{
    int isPosNegZero;

public:
    void getdata();
    void givedata();
};

void posNegZero::getdata(){
    cout << "Enter an integer to find out if it's +tiv, -tiv, Zero: ";
    cin >> isPosNegZero;
}

void posNegZero::givedata(){
    if (isPosNegZero > 0){
        cout << isPosNegZero << " is Possitive ";
    }
    else if (isPosNegZero < 0){
        cout<< isPosNegZero <<" is Negative";
    }
    else{
        cout << isPosNegZero << " is Zero ";
    }
}

int main(){
    posNegZero number;
    number.getdata();
    number.givedata();

    return 0;
}
