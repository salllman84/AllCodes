#include<iostream>
using namespace std;

int DecimalToBinary(int num) {
    int binary = 0;   // This will store the binary result as an integer
    int placeValue = 1;  // This will track the position of the current binary digit (1, 10, 100, ...)

    while (num > 0) {
        int remainder = num % 2;  // Get the remainder (0 or 1)
        binary = binary + remainder * placeValue;  // Add the remainder to the binary number at the correct place value
        num /= 2;  // Divide the number by 2
        placeValue *= 10;  // Move to the next binary digit (like moving from units to tens in decimal)
    }

    return binary;  // Return the binary result as an integer
}

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;

    int binaryResult = DecimalToBinary(number);
    cout << "Binary representation of " << number << " is: " << binaryResult << endl;

    return 0;
}



/*

we can also string to store the integer value (reminder) and then reverse it. because we count
the binary numbers from bottom to top, that's why we need to place 2nd number (ten-> dahai) it before the (unit ekai),
and then place (100 senkrra), before (ten), and then place thausend (1000-> hazar)..... and so on.



#include<iostream>
#include<string>  // For storing the binary number as a string
using namespace std;

string DecimalToBinary(int num) {
    string binary = "";  // String to store the binary result

    if (num == 0) {
        return "0";  // Special case for 0
    }

    / Keep dividing the number by 2 and storing remainders
    while(num > 0) {
        int remainder = num % 2;  // Get the remainder (0 or 1)
        binary = to_string(remainder) + binary;  // It is a Built-in function which, Append the remainder in reverse order
        num /= 2;  // Divide the number by 2. // 10/2=5' 5/2= 1' 1/2=0
    }

    return binary;  // Return the binary string
}

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;

    string binaryResult = DecimalToBinary(number);
    cout << "Binary representation of " << number << " is: " << binaryResult << endl;

    return 0;
}




*/
