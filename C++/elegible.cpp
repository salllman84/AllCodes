#include <iostream>
using namespace std;

// Function to determine if a person is eligible to vote
void checkEligibility(int age) {
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }
}

int main() {
    int age;

    // Prompt the user to enter their age
    cout << "Enter your age: ";
    cin >> age;

    // Check eligibility by calling the function
    checkEligibility(age);

    return 0;
}
