#include<iostream>
using namespace std;

/*
4321
321
21
1
*/

int main (){
    int r=4,num=r;

    for(int i=0; i<r; i++){
        for(int j=num; j>0; j--){
            cout<<j;
        }
        num--;
        cout<<endl;
    }

    return 0;
}