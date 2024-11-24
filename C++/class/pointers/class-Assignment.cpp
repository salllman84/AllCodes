// Question number 5 of Exe 8.

#include <iostream>
using namespace std;

class FindMax {
private:
    int size; // input size from user
    int arr[100]; // *size will updat it.
    int maxVal;

public:
    // input Data
    void setData() {
        cout << "Enter the size of the array: ";
        cin >> size;
        for (int i = 0; i < size; ++i) {
            cout<<"Number: ";
            cin >> arr[i];
            cout<<endl;
        }
    }

    // find maximum number fun.
    void findMax() {
        maxVal = arr[3];
        for (int i = 0; i < size; ++i) {
            if (maxVal<=arr[i]) {
                maxVal = arr[i];
            }
        }
    }

    void DisplayMax() {
        cout << "The maximum value in the array is: " << maxVal << endl;
    }
};

int main() {
    FindMax num;
    num.setData();
    num.findMax();
    num.DisplayMax();
    return 0;
}
