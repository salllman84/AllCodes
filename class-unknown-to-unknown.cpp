#include<iostream>
using namespace std;

class unknownToUnknown{
    int firstNum, lastNum;

    public:
    int sum=0;
    void getdata();
    void givedata();
    int givesum();
};

void unknownToUnknown::getdata(){
    cout<<"Enter starting number : ";
    cin>>firstNum;
    cout<<"Enter last number : ";
    cin>>lastNum;
}

void unknownToUnknown::givedata(){
    cout<<"Number from "<<firstNum<<" to "<<lastNum<<" are below. "<<endl;

    for(int i=firstNum; i<=lastNum; i++){
        cout<<i<<" ";
    }
}

int unknownToUnknown::givesum(){
    
    for(int i=firstNum; i<=lastNum; i++){
        sum+=i;
    }
    cout<<"Sum = "<<sum;
}

int main(){
    unknownToUnknown printnum;
    printnum.getdata();
    printnum.givedata();
    printnum.givesum();

    return 0;
}