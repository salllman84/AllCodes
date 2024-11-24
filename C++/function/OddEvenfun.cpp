#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter first number\n";
    cin>>number;
    int number2;
    cout<<"Enter last number\n";
    cin>>number2;

    if(number<number2){
        for(int i=number; i<=number2; i++){
            if(i%2==0){
                cout<<i<<" is Even\n";
            }
            else{
                cout<<i<<" is Odd\n";
            }
        }
    }

    if(number>number2){
        for(int i=number; i>=number2; i--){
            if(i%2==0){
                cout<<i<<" is Even\n";
            }
            else{
                cout<<i<<" is Odd\n";
            }
        }
    }

    return 0;
}