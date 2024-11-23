#include <iostream>
using namespace std;

// Function to print the table of a given number
void printTable(int number) {
    cout << "Table of " << number << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << number << " * " << i << " = " << (number * i) << endl;
    }
}

int main() {
    int num;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Call the function to print the table of the entered number
    printTable(num);

    return 0;
}
