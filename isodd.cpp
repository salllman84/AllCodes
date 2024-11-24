#include<iostream>
using namespace std;

// Function to find and print odd numbers between two given numbers
void findOddNumbers(int a, int b) {
    cout << "Odd numbers between " << a << " and " << b << " are: ";
    for (int i = a; i <= b; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Call the function to find and print odd numbers
    findOddNumbers(num1, num2);

    return 0;
}
