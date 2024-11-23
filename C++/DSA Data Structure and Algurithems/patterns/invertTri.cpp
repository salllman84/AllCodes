#include<iostream>
using namespace std;

/*
11111
 2222
  333
   44
    5
*/

int main(){
    int r=5;
    int num=1;
    for(int i=0; i<r; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
            for(int k=0; k<r-i; k++){
                cout<<num; // we can also print (i+1)
            }
            num++;
            cout<<endl;
    }
    return 0;
}