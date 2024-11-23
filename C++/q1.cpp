#include<iostream>
using namespace std;

int main(){

    float current_bill, total_bill = 0.0; // Initialize total_bill

    cout<<"Enter the total bill: ";
    cin>>current_bill;

    if(current_bill <= 300){
        total_bill = current_bill * 3;
    }
    else{
        total_bill = current_bill * 3.5 + (current_bill * 0.05 / 100);
    }

    cout<<"Your total bill of "<<current_bill<<" is equal to = "<<total_bill;

    return 0;
}
