#include<iostream>
using namespace std;

// Division

class devision{
    int a, b;

    public:
    void getdata();
    void givedata();
    
};

void devision::getdata(){
        cout<<"Enter increment : ";
        cin>>a;
        cout<<"Enter decrement : ";
        cin>>b;
    }

void devision::givedata(){
    if (a<b){
            cout<<"Please Enter the increment greater then decrement";
        }
    else{
    cout<<"Answer : "<<a/b;
    }
}

int main(){

    devision div;
    div.getdata();
    div.givedata();

    return 0;
}