#include<iostream>
using namespace std;

int main(){
    int r=4;
    

    for(int i=0; i<r; i++){
        for(int j=0; j<r-i-1; j++){
            cout<<" ";
        }
        char ch='A';
        for(int k=0; k<=i; k++){
            cout<<ch;
            ch++;
        }
        ch-=2;
        for(int l=i; l>0; l--){
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
    return 0;
}