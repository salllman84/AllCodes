#include<iostream>
using namespace std;

void byvalue(int a, int b){
    int c=2000;
    int d=200;
    cout<<c+c<<endl;
};

int main(){

    int a=6;
    int b=2;
    byvalue(a,b);

    return 0;
}