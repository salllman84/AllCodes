#include <iostream>
using namespace std;

void calculator(double num1, char op, double num2) {
    double result;

    
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
                return;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            return;
    }

    cout << "Result: " << result << endl;
}

int main() {
    double num1, num2;
    char op;

    // cout << "Enter first number: ";
    cin >> num1;
    // cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    // cout << "Enter second number: ";
    cin >> num2;

    calculator(num1, op, num2);

    return 0;
}