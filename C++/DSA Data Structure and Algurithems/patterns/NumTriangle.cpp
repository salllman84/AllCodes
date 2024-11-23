#include<iostream>
using namespace std;


/*

1
22
333
4444
55555
666666

*/

int main(){

int n=6;
int Num=1;
for(int i=0; i<n; i++){
    
    for(int j=0; j<=i; j++){
        cout<<Num; // we can aslo prin (i+1)
    }
    Num++; // No need of Num if we are printing (i+1)
    cout<<endl;
    
}

    return 0;
}