// using while loop


#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    int factorial = 1;

    // Calculate factorial using a for loop
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
        cout << factorial<<" * "<<i<<" = " << factorial << endl;
    }

    

    return 0;
}

// using do-while loop

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    
    int factorial = 1;
    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= num);
    
    cout << "Factorial of " << num << " is: " << factorial << endl;
    return 0;
}



// using for loop

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    
    int factorial = 1;
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    
    cout << "Factorial of " << num << " is: " << factorial << endl;
    return 0;
}
