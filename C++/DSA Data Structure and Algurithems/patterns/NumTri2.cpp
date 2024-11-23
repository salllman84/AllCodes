#include<iostream>
using namespace std;

/*
1
12
123
1234
12345
*/

int main(){
    int r=5;

    for(int i=0; i<r; i++){
        int num=1;
        for(int j=0; j<=i; j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }

    return 0;
}