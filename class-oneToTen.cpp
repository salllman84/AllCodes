#include<iostream>
using namespace std;

// Print from one to ten.

class ontToTen{

    public:
    void getdata();
    void givedata();
};

void ontToTen::givedata(){
    for (int i=1; i<=10; i++){
        cout<<i<<" ";
    }
}

int main(){
    ontToTen print;
    print.givedata();

    return 0;
}