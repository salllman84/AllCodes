#include<iostream>
using namespace std;

void table(int a){

    for(int i=1; i<=10; i++){
        int result = a*i;
        cout<<a<<"*"<<i<<" = "<<result<<endl;
    }
}

int main(){

    int num;
    cout<<"Enter Number to print its table\n";
    cin>>num;
    table(num);

    return 0;

}