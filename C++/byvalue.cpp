#include<iostream>
using namespace std;

int byvalue(int c){
    int b=c*3;
    return b;
}

int main (){

    int c;
    cout<<"enter integer value. ";
    cin>>c;
    cout<<"result = "<<byvalue(c);

    return 0;
}