#include<iostream>
using namespace std;

/*
A
BC
DEF
GHIJ
KLMNO
*/

int main(){

    int r=5;
    char ch='A';
    for(int i=0; i<r; i++){
        for(int j=0; j<=i; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }

    return 0;
}