#include<iostream>
using namespace std;

/*
A
BB
CCC
DDDD
EEEEE
*/

int main(){
    int r=5;
    char ch='A';
    for(int i=0; i<r; i++){
        for (int j=0; j<=i; j++){
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
}