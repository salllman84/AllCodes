#include<iostream>
using namespace std;

/*
A
AB
ABC
ABCD
ABCDE
*/

int main(){

    int r=5;

    for(int i=0; i<r; i++){
        char ch='A';
        for(int j=0; j<=i; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }

    return 0;
}