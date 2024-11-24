#include<iostream>
using namespace std;
int main(){

int tab, result, lop;

cout<<"Enter table value= ";
cin>>tab;

lop = 1;
result = 0;
while (lop <= 10)
{
    result=tab*lop;
    lop++;
}
cout<<result;

    return 0;
}