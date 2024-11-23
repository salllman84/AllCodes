#include <iostream>
using namespace std;

int main() {
    int values[4];

    cout << "Enter values up to 4:" << endl;
    for(int i = 0; i < 4; i++) {
        cout << "Enter value in [" << i << "] : ";
        cin >> values[i];
    }

    // Bubble sort to sort the values in ascending order
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3 - i; j++) {
            if(values[j] > values[j + 1]) {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }

    cout << "The values in ascending order are: " << endl;
    for(int i = 0; i < 4; i++) {
        cout << values[i] << " ";
    }

    return 0;
}
