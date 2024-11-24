#include<iostream>
using namespace std;

int main() {
    char a[15], b[15];

    cout << "Enter any string (up to 14 characters): ";
    cin >> a;


    for(int i = 0; i < 15 && a[i] != '\0'; i++) {
        b[i] = a[i];
    }
    b[14] = '\0';
    cout << "Copied string: " << b << endl;

    return 0;
}
