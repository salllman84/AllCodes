#include<iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    // Member function to resize the rectangle
    void resize(const Rectangle& r) {
        length = r.length;
        width = r.width;
    }

    // Function to display the dimensions of the rectangle
    void display() const {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};

int main() {
    Rectangle rect1(4, 6); // Creating a rectangle with length 4 and width 6
    Rectangle rect2(8, 10); // Creating another rectangle with length 8 and width 10

    rect1.resize(rect2); // Resizing rect1 to match rect2's dimensions
    rect1.display(); // Displaying the dimensions of resized rect1

    return 0;
}
