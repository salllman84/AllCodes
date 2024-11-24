#include <iostream>
using namespace std;

class product2;

class product {
    int prd1[3];
public:
    void Prd1Total(int a[3]) {
        for (int i = 0; i < 3; i++) {
            prd1[i] = a[i];
        }
    }
    friend int TotalSum(product, product2);
};

class product2 {
    int prd2[4];
public:
    void Prd2Total(int a[4]) {
        for (int i = 0; i < 4; i++) {
            prd2[i] = a[i];
        }
    }
    friend int TotalSum(product, product2);
};

int TotalSum(product first, product2 second) {
    int total = 0;
    for (int i = 0; i < 3; i++) {
        total += first.prd1[i];
    }
    for (int i = 0; i < 4; i++) {
        total += second.prd2[i];
    }
    return total;
}

int main() {
    product p1;
    product2 p2;

    int arr1[3] = {23, 24, 25};
    int arr2[4] = {34, 45, 56, 47};

    p1.Prd1Total(arr1);
    p2.Prd2Total(arr2);

    int total = TotalSum(p1, p2);
    cout << "Total sum of all product values: " << total << endl;

    return 0;
}
