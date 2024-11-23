#include<iostream>
using namespace std;

// Print from one to n.

class oneToN{
    int lastnum;

    public:
    void getdata();
    void givedata();
};

void oneToN::getdata(){
    cout<<"Enter last number : ";
    cin>>lastnum;
}

void oneToN::givedata(){
    for (int i=1; i<=lastnum; i++){
        cout<<i<<" ";
    }
}

int main(){
    oneToN printToN;
    printToN.getdata();
    printToN.givedata();

    return 0;
}