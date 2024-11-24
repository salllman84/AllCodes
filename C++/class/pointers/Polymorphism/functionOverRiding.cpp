#include<iostream>
using namespace std;

class Shape {
    char square[3][3];
public:
    virtual void draw() {
        cout << "Drawing a 3x3 square:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "Enter a character for [" << i << "][" << j << "]: ";
                cin >> square[i][j];
            }
        }
    }

    void display() {
        cout << "\nDisplaying 3x3 square:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << square[i][j] << " ";
            }
            cout << endl;
        }
    }
};

class Circle : public Shape {
    char triangle[5][5];
public:
    void draw() override {
        cout << "Drawing a triangle shape:\n";
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j <= i; j++) {
                cout << "Enter a character for [" << i << "][" << j << "]: ";
                cin >> triangle[i][j];
            }
        }
    }

    void display() {
        cout << "\nDisplaying triangle shape:\n";
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j <= i; j++) {
                cout << triangle[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Shape* ptr;
    Circle cc;
    ptr = &cc;
    ptr->draw(); // This will call Circle's draw method
    cc.display(); // This will call Circle's display method

    return 0;
}
