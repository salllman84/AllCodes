#include<iostream>
using namespace std;

int main(){
int number, reminder;

cout<<"Enter in integer type value = ";
cin>>number;

while (number>=1){

    reminder = number % 2;
    number = number/2;
    cout<<reminder;

}


    return 0;
}