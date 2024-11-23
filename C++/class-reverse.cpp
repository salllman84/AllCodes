#include<iostream>
using namespace std;

// print number in reverse

class reverse{
    int num;

    public:
    void getdata();
    void givedata();
};

void reverse::getdata(){

    // to get input form user
    cout<<"Enter a number to print it reverse : ";
    cin>>num;
}

void reverse::givedata(){
    cout<<"Number from "<<num<<" to 0 are below."<<endl;
    // using to print given number reverse
    for(int i=num; i>0; i--){
        cout<<i<<" ";
    }
}

int main(){
    reverse number;
    number.getdata();
    number.givedata();

    return 0;
}