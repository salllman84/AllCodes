#include<iostream>
using namespace std;

int BinToDeci(int bin){
    int ans=0, power=1;

    while(bin>0){
        int reminder=bin%10;
        ans += reminder*power;

        bin = bin/10; // updation of bin
        power*=2;
    }

    return ans;
}

int main(){
    int binNum=10101;
    cout<<BinToDeci(binNum);

    return 0;
}