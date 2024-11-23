#include<iostream>
using namespace std;

int main(){
// Write a program that uses pointer arithmetic to iterate
    // through an integer array and print each element and address.


    int StdMarks[4] = {56, 25, 64, 29};
    int* ptr = StdMarks;

    for(int i = 0; i < 4; i++){
    
        cout << "Element  " << i+1<< ": " << *ptr;
        cout << "\tAddress  " << i+1<< ": " <<ptr;
        ptr++;
        cout<<endl;

    }

    return 0;
}

//  output

/*

Element  1: 56	Address  1: 0x61fee8
Element  2: 25	Address  2: 0x61feec
Element  3: 64	Address  3: 0x61fef0
Element  4: 29	Address  4: 0x61fef4

*/