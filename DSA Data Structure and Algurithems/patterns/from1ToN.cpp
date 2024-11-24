#include<iostream>
using namespace std;

/*

1 2 3 4 5      
6 7 8 9 10     
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 

*/

int main(){
    int rows=5;
    // cout<<"Enter number of rows: "; cin>>rows;
    int StartNum=1; // we declare it is global b/c we don't want to restart it from 1;

    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            cout<<StartNum<<" ";
            StartNum++;
        }
        cout<<endl;
    }
}