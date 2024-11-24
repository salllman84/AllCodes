#include<iostream>
using namespace std;

/*

A B C D 
A B C D
A B C D
A B C D

*/

int main(){
    int n=4;
    char ch = 'A';    // [ if we write it here then it will increment overall alphabets]
    for(int i=0 ; i<n; i++){
        // char ch = 'A';
        for(int j=0; j<n; j++){
            cout<<ch<<" ";
            ch++; 
                        /*[ if we increment it here by defining ch='A' above the loop = A B C D 
                                                                                        E F G H
                                                                                        I J K L
                                                                                        M N O P  */
        }
        cout<<endl;
    }
}