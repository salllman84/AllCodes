#include<iostream>
using namespace std;

int main(){
    int a=5, b=7;
                         // 5= 101
                        //  7= 111
                        // ________
                        //     101=5
    cout<<(a&b);

    return 0;
}