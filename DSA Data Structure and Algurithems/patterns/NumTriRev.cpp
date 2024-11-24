#include<iostream>
using namespace std;

/*
1
21
321
4321
54321
*/

int main(){
    int r=5;
int num=1;
    for(int i=0; i<r; i++){
        for(int j=num; j>0; j--){
            cout<<j;
        }
        num++;
        cout<<endl;
    }

    return 0;
}

/*
we can also write it like

for(int i = 0; i < r; i++){
        for(int j = i + 1; j > 0; j--){
            cout << j;
        }
        cout << endl;
    }

*/