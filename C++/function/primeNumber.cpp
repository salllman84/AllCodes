#include<iostream>
using namespace std;

int checkOddEven(int num){
    if(num%2==0){
        cout<<num<<" is Even number."<<endl;
    }
    if(num%3==0){
        cout<<num<<" is Odd number."<<endl;
    }
        
}

bool checkPrime(int num){
    bool isprime=true;
    for(int i=2; i<num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int number;
    cout<<"Number: ";
    cin>>number;

    int isOddEven = checkOddEven(number);
    bool isprime=checkPrime(number);
    if(isprime){
        cout<<number<<" is prime number"<<endl;
    }
}