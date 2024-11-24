#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    char pass[10];
    cout<<"Enter an Eight character long keyword: ";
    for(int i=0; i<=10; i++){
        pass[i]=getche();
        pass[i]='\0';
    }
    cout<<"\nYou have enter word is : "<<pass;
    getche();

    return 0;
}