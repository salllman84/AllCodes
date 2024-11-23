#include<iostream>
using namespace std;

/*
   1
  121
 12321
1234321   devided it into tow parts it the middle of colomns.
*/

int main(){
    int r=4;
    for(int i=0; i<4; i++){
        // Spaces
        for(int j=0; j<r-i-1; j++){
            cout<<" ";
        }
        // first num
        for(int k=0;k<=i; k++){
            cout<<k+1;
        }

        //second num
        for(int l=i; l>0; l--){ 
            cout<<l;
        }
        cout<<endl;
    }
}