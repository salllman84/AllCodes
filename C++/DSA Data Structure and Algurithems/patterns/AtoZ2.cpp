#include<iostream>
using namespace std;

/*
I want to print this pattern please
A A A A 
B B B B
C C C C
D D D D

*/

int main(){
    int n=4;
    char ch = 'A'; // this will update the value into 'B', 'C...';
    for(int i=0 ; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}