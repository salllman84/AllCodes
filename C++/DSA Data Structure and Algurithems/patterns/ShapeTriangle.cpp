#include<iostream>
using namespace std;

/*

*
**
***
****

*/

int main(){
    int r=5;

    for(int i=0; i<r; i++){
        char ch='*';
        for(int j=0; j<=i; j++){
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}