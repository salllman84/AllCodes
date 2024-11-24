#include <iostream>
using namespace std;

// Function to reverse an integer
int reverseInteger(int n) {
    int reversed = 0; // Variable to store the reversed number

    while (n != 0) {
        int lastDigit = n % 10; // Get the last digit of the number
        reversed = reversed * 10 + lastDigit; // 5,7,6, 0.675 Add the last digit to the reversed number
        n = n / 10; // Remove the last digit from the original number
    }

    return reversed; // Return the reversed number
}

int main() {
    int number = 675; // Example number 67.5, 6.75, 0.675
    int reversedNumber = reverseInteger(number); // Call the function and store the result in reversedNumber

    // Print the original and reversed numbers
    cout << "Original Number: " << number << endl;
    cout << "Reversed Number: " << reversedNumber << endl;

    return 0;
}
