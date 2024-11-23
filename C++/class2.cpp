#include <iostream>
using namespace std;

// Addition

class addition {
    int a, b;

public:
    int getdata();
    int putdata();
};

int addition::getdata() {
    cout << "Enter first number to add: ";
    cin >> a;
    cout << "Enter second number to add: ";
    cin >> b;
    return a + b;
}

int addition::putdata() {
    return a + b;
}

int main() {
    addition add;
    int sum = add.getdata();
    cout << "Addition = " << sum << endl;

    return 0;
}
