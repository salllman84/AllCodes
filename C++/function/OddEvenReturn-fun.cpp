#include<iostream>
using namespace std;

void printEven(int a, int b) {
    if (a > b) {
        swap(a, b); // swap will change the the value of a to b and b to a. if (a<b)
    }
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            cout << i << " is Even\n";
        }
    }
}

void printOdd(int a, int b) {
    if (a > b) {
        swap(a, b);
    }
    for (int i = a; i <= b; ++i) {
        if (i % 2 != 0) {
            cout << i << " is Odd\n";
        }
    }
}

int main() {
    int number1, number2;
    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "\nEven numbers in the range:\n";
    printEven(number1, number2);

    cout << "\nOdd numbers in the range:\n";
    printOdd(number1, number2);

    return 0;
}
