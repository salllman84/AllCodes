// Rectangle Class: Design a Rectangle class representing a rectangle
// with attributes length and width. Implement constructors to initialize
// these attributes and a destructor to handle cleanup tasks.

#include<iostream>
using namespace std;

class rectangle{
    float length, width;

    public:
    rectangle(float l, float w){
        length = l;
        width = w;
    }

    void giveRectangleDetails(){
        cout<<"\nLength of Rectangle = "<<length;
        cout<<"\nWidth of Rectangle = "<<width;
    }

    ~rectangle(){
        cout<<"\nerased";
    }
};

int main(){
    rectangle firstRectangle(45.8, 15.7);
    firstRectangle.giveRectangleDetails();

    return 0;
}