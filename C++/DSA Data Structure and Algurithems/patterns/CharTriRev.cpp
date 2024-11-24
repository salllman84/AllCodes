#include<iostream>
using namespace std;

/*
A
BA
CBA
DCBA
EDCBA
*/

int main(){
    int r = 5;

    for(int i = 0; i < r; i++){
        for(char ch = 'A' + i; ch >= 'A'; ch--){
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}

/*
another pattern
#include<iostream>
using namespace std;

/*
A
BA
CBA
DCBA
EDCBA
*/
/*
    int r = 5;

    for(int i = 0; i < r; i++){
        char ch = 'A' + i;  // Initialize 'ch' for the current row
        for(int j = i + 1; j > 0; j--){
            cout << ch;    // Print the current character
            ch--;          // Decrement the character
        }
        cout << endl;
    
*/