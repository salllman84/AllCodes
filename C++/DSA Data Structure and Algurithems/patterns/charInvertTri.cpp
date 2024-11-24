#include<iostream>
using namespace std;

/*
AAAA
 BBB
  CC
   D
*/

int main(){
    int r=4;
    char ch='A';
    for(int i=0; i<r; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k=0; k<r-i; k++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
    return 0;
}