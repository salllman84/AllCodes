/* 

Write a C++ class named Rectangle with private attributes length and width.
Implement a constructor that initializes these attributes to default values
of 0 when an object of the class is created.

*/

#include<iostream>
using namespace std;

class rectangle{
    float length;
    float width;

    public:

    rectangle(float a, float b){
        length=a;
        width=b;

        cout<<"Length : "<<length<<endl;
        cout<<"Width  : "<<width;
    }

};

int main(){
rectangle clengthWidth(0,0);
return 0;
}